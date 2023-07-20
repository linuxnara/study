import tkinter as tk
from tkinter import messagebox
import random

class CrosswordGame:
    def __init__(self, root):
        self.root = root
        self.root.title("한글 십자 낱말 퍼즐 게임")

        self.word_list = [
            "일석이조", "이심전심", "광복절", "동분서주", "유유히", "궁리단심", "익명불공", "삼생삼세", "사사건건", "마산아산", 
            "사면초가", "원기옥살", "역린반동", "익사익쇄",
            # 추가 단어들 (여기에 사자성어로 바꿀 단어를 넣으세요)
            "청룡문", "개과천선", "권모술수", "연효자복", "장단절의", "돌다리도커다리", "군계일학", "도토리키재기", "유비무환", "발해무친",
            "솔솔바람", "일구일이", "풍문으로들었소", "유비무환", "아우성소림", "단우이웃", "여덟번의주문", "사면초가", "왕검무훈", "칠전팔기",
            "악구영상", "무영건음", "평온무사", "사찰치상", "반룡법현", "반월전진", "평소철철", "무마치강산", "무이명전", "애무파탄",
            "견우직녀", "이심전심", "속군속금", "백년고수", "귀경마음", "두루마기", "대기만성", "혼란해소", "이토록저토록", "목발이나귀",
            "강도높은소리", "궁궐이사", "급전저금", "한심토록", "안전제일", "등용무지", "활활달인", "현모양처", "대낮눈감춤", "미리내기",
            "육중한짐승", "꾀병이득", "행운동서", "일석이조", "심사숙고", "전래동화", "미안헤요", "산중부에새는새", "유명무실", "죽도약도",
            "양귀비꽃잎", "일이삼사오", "오십보백보", "사마귀처럼", "소리소문", "짝살벌판", "군계일학", "영문테솔", "도사명인", "나비효과",
            "해비치기", "명불허전", "범인은내이므로", "계율법사", "일우일언", "바람쐬다", "강박광리", "십상일곱", "무마고무비", "양귀비꽃잎"            
        ]
        
        # 랜덤하게 30개의 단어 선택
        self.selected_word_list = random.sample(self.word_list, 20)

        self.board_size = 20
        self.create_crossword()

        self.table_frame = tk.Frame(root)
        self.table_frame.pack(pady=10)
        self.create_table()

        self.answer_entry = tk.Entry(root, font=("Arial", 16))
        self.answer_entry.pack(pady=10)

        self.submit_button = tk.Button(root, text="제출", command=self.check_answer)
        self.submit_button.pack(pady=10)

    def create_crossword(self):
        self.current_word = [[' ' for _ in range(self.board_size)] for _ in range(self.board_size)]

        for proverb in self.selected_word_list:
            proverb_length = len(proverb)
            intersect = False

            while not intersect:
                x = random.randint(0, self.board_size - 1)
                y = random.randint(0, self.board_size - 1)
                direction = random.choice([(0, 1), (1, 0)])  # 가로 또는 세로 방향

                if direction == (0, 1) and y + proverb_length <= self.board_size:
                    intersect = all(self.current_word[x][y + i] == ' ' or self.current_word[x][y + i] == proverb[i] for i in range(proverb_length))
                elif direction == (1, 0) and x + proverb_length <= self.board_size:
                    intersect = all(self.current_word[x + i][y] == ' ' or self.current_word[x + i][y] == proverb[i] for i in range(proverb_length))

            for i, char in enumerate(proverb):
                if direction == (0, 1):
                    self.current_word[x][y + i] = char
                else:
                    self.current_word[x + i][y] = char

    def create_table(self):
        self.cell_labels = []  # 표에 있는 셀(Label)을 저장하는 리스트
        for i in range(self.board_size):
            row_labels = []
            for j in range(self.board_size):
                cell_value = self.current_word[i][j]
                cell_label = tk.Label(self.table_frame, text=cell_value, font=("Arial", 16), width=2, height=1, borderwidth=1, relief="solid")
                cell_label.grid(row=i, column=j)
                row_labels.append(cell_label)
            self.cell_labels.append(row_labels)

    def check_answer(self):
        user_input = self.answer_entry.get().strip()
        if user_input in self.selected_word_list:
            self.selected_word_list.remove(user_input)
            for i in range(self.board_size):
                for j in range(self.board_size):
                    cell_value = self.cell_labels[i][j]["text"]
                    if cell_value in user_input:
                        self.cell_labels[i][j]["bg"] = "yellow"  # 정답인 부분에 노란색으로 색칠
                        if user_input.count(cell_value) > 1:  # 격자 안에 같은 글자가 중복되는 경우 다른 정답으로 칠하기 위해
                            user_input = user_input.replace(cell_value, '', 1)
        if not self.selected_word_list:
            messagebox.showinfo("정답", "정답입니다!")
            self.root.destroy()
        else:
            messagebox.showerror("오답", "틀렸습니다. 다시 시도하세요.")

if __name__ == "__main__":
    root = tk.Tk()
    game = CrosswordGame(root)
    root.mainloop()