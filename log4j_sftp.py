import tkinter as tk
from tkinter import scrolledtext
import threading
import paramiko

BUFFER_SIZE = 1000  # 출력창에 표시할 최대 라인 수
monitoring_thread = None

def sftp_tail(host, port, username, password, remote_file, buffer_size):
    ssh_client = paramiko.SSHClient()
    ssh_client.set_missing_host_key_policy(paramiko.AutoAddPolicy())

    try:
        ssh_client.connect(host, port=port, username=username, password=password)
        sftp = ssh_client.open_sftp()
        f = sftp.file(remote_file, 'r')

        line_buffer = []

        while True:
            line = f.readline()
            if not line:
                # 파일의 끝에 도달하면 기다린 뒤에 다시 읽기
                f.seek(0, 1)
                continue

            line_buffer.append(line.strip())
            if len(line_buffer) >= buffer_size:
                # 버퍼의 크기를 초과하면 출력 후 비우기
                output_lines = '\n'.join(line_buffer)
                text_area.insert(tk.END, output_lines + '\n')
                text_area.see(tk.END)  # 스크롤 맨 아래로 이동
                line_buffer.clear()

    except paramiko.AuthenticationException:
        print("Authentication failed.")
    except paramiko.SSHException as e:
        print("SSH error:", e)
    except paramiko.sftp.SFTPError as e:
        print("SFTP error:", e)
    except Exception as e:
        print("Error:", e)

    finally:
        f.close()
        sftp.close()
        ssh_client.close()

def start_monitoring():
    global monitoring_thread

    if monitoring_thread and monitoring_thread.is_alive():
        print("Monitoring is already running.")
        return

    # SFTP 접속 정보와 파일 경로 설정
    sftp_host = '192.168.1.100'
    sftp_port = 22
    sftp_username = 'test'
    sftp_password = 'test'
    remote_file_path = '/tmp/test.out'

    # 새로운 스레드를 시작하여 SFTP 모니터링 실행
    monitoring_thread = threading.Thread(target=sftp_tail, args=(sftp_host, sftp_port, sftp_username, sftp_password, remote_file_path, BUFFER_SIZE))
    monitoring_thread.start()

def stop_monitoring():
    global monitoring_thread

    if monitoring_thread and monitoring_thread.is_alive():
        monitoring_thread.join()
        print("Monitoring stopped.")
    else:
        print("Monitoring is not running.")

# GUI 설정
window = tk.Tk()
window.title("SFTP Tail Monitoring")
window.geometry("800x600")

text_area = scrolledtext.ScrolledText(window, wrap=tk.WORD)
text_area.pack(fill=tk.BOTH, expand=True)

start_button = tk.Button(window, text="Start Monitoring", command=start_monitoring)
start_button.pack()

stop_button = tk.Button(window, text="Stop Monitoring", command=stop_monitoring)
stop_button.pack()

window.protocol("WM_DELETE_WINDOW", stop_monitoring)  # 창을 닫을 때 모니터링 중지
window.mainloop()


