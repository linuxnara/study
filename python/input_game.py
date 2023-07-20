import tkinter as tk
import random

# 단어 리스트 (100개의 단어)
word_list = ['apple', 'banana', 'cherry', 'orange', 'grape', 'watermelon',
             'strawberry', 'blueberry', 'melon', 'kiwi', 'peach', 'pear',
             'plum', 'mango', 'pineapple', 'lemon', 'lime', 'coconut',
             'papaya', 'apricot', 'avocado', 'blackberry', 'raspberry',
             'guava', 'grapefruit', 'fig', 'date', 'nectarine', 'olive',
             'pomegranate', 'dragonfruit', 'passionfruit', 'persimmon',
             'quince', 'kiwifruit', 'cantaloupe', 'honeydew', 'mulberry',
             'lychee', 'cranberry', 'elderberry', 'rhubarb', 'boysenberry',
             'gooseberry', 'tangerine', 'apricot', 'starfruit', 'durian',
             'breadfruit', 'jackfruit', 'plantain', 'carambola', 'kumquat',
             'clementine', 'tamarind', 'persimmon', 'ackee', 'sapote',
             'soursop', 'longan', 'sugar-apple', 'sapodilla', 'caneberry',
             'cupuacu', 'miracle fruit', 'bignay', 'jabuticaba', 'gac',
             'kiwano', 'langsat', 'loganberry', 'rambutan', 'salak',
             'santol', 'soursop', 'tamarillo', 'ugli fruit', 'yuzu',
             'chirimoya', 'cucamelon', 'buddhas hand', 'honeyberry',
             'cactoid cactoid', 'melonette', 'goumi', 'cupuaçu',
             'grapples', 'sakura', 'barbados cherry', 'lulo', 'limequat',
             'chayote', 'bignay', 'pawpaw', 'marang', 'citron', 'adeje',
             'safou', 'burahem', 'guanabana', 'cupuaçu', 'pandanus',
             'karkadé', 'camu camu', 'sarisa', 'casaba', 'kiwifruit',
             'jabuticaba', 'chayote', 'blushwood berry', 'acai berry']

# 떨어지는 단어 관리 클래스
class FallingWord:
    def __init__(self):
        self.current_word = ''
        self.word_label = None

    def drop_word(self):
        if self.word_label:
            canvas.delete(self.word_label)

        # 랜덤 단어 선택
        self.current_word = random.choice(word_list)
        x_position = random.randint(50, 550)
        self.word_label = canvas.create_text(x_position, 0, text=self.current_word, font=('Helvetica', 30))
        self.move_word()

    def move_word(self):
        x, y = canvas.coords(self.word_label)
        if y < 400:
            canvas.move(self.word_label, 0, 10)  # 떨어지는 속도 조절
            root.after(falling_speed, self.move_word)
        else:
            self.drop_word()

    def check_word(self, user_input):
        if self.current_word and user_input.strip().lower() == self.current_word:
            # 맞는 단어를 입력하면 해당 단어를 지움
            canvas.delete(self.word_label)
            return True
        return False

# 게임에 필요한 변수들
score = 0
falling_speed = 1000  # 떨어지는 속도(ms) 초기값은 1초
max_words = 3  # 동시에 떨어지는 최대 단어 개수

# 떨어지는 단어 객체들
falling_words = [FallingWord() for _ in range(max_words)]

# 게임 시작 여부
game_started = False

# 새로운 단어로 업데이트하는 함수
def new_word():
    global score, falling_speed

    for word in falling_words:
        if word.check_word(input_entry.get()):
            score += 1
            score_label.config(text=f'Score: {score}')

            # 속도를 더 빠르게 만들기 위해 기존 속도에서 100ms를 뺌
            falling_speed -= 100

    input_entry.delete(0, tk.END)

# GUI 설정
root = tk.Tk()
root.title("단어 맞추기 게임")
root.geometry("600x400")

score_label = tk.Label(root, text='Score: 0', font=('Helvetica', 20))
score_label.pack(pady=20)

input_entry = tk.Entry(root, font=('Helvetica', 20))
input_entry.pack(pady=10)

canvas = tk.Canvas(root, width=600, height=400, bg='white')
canvas.pack()

# 엔터 키 입력 처리
def on_enter_key(event):
    if game_started:
        new_word()

input_entry.bind('<Return>', on_enter_key)

# 게임 시작
for word in falling_words:
    word.drop_word()

game_started = True

root.mainloop()