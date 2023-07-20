import tkinter as tk
from tkinter import scrolledtext, ttk, filedialog
import re

def parse_log_data(log_data):
    # log4j 패턴에 맞는 정규 표현식
    log_pattern = r'(\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}\.\d+)\s*\[(DEBUG|INFO\s*|ERROR)\]\s*\[\]\s*\((\S+)\s*:(\d+)\)\s+(.+)'

    parsed_data = []
    for line in log_data:
        match = re.match(log_pattern, line)
        if match:
            timestamp, log_level, logger_name, logger_line, log_message = match.groups()
            parsed_data.append((timestamp, log_level, logger_name, logger_line, log_message))

    return parsed_data

def display_data():
    log_file_path = filedialog.askopenfilename(filetypes=[('Log Files', '*.out'), ('Text Files', '*.txt'), ('All Files', '*.*')])
    if log_file_path:
        with open(log_file_path, 'r') as file:
            log_data = file.readlines()

        parsed_data = parse_log_data(log_data)

        tree.delete(*tree.get_children())  # 기존 데이터 삭제
        for item in parsed_data:
            tree.insert('', 'end', values=item)

# GUI 생성
root = tk.Tk()
root.title("Log Viewer")

# 로그 데이터를 표시하는 트리뷰(Treeview) 위젯
columns = ('Timestamp', 'Log Level', 'Logger Name', 'Logger Line', 'Log Message')
tree = ttk.Treeview(root, columns=columns, show='headings')

for col in columns:
    tree.heading(col, text=col)
    #tree.column(col, width=150)

tree.column(0, width=150, stretch=False)
tree.column(1, width=70, stretch=False)
tree.column(2, width=150, stretch=False)
tree.column(3, width=50, stretch=False)
tree.column(4, stretch=True)

tree.pack(fill='both', expand=True)

# 파일 선택 버튼
file_button = tk.Button(root, text="Select Log File", command=display_data)
file_button.pack()

# GUI 실행
root.mainloop()