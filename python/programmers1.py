from collections import defaultdict

class Trie:
    #초기화
    def __init__(self):
        self.children = defaultdict(Trie)
        self.count = 0

    #insert
    def insert(self, word: str):
        curr = self
        for c in word:
            curr.count += 1
            curr = curr.children[c]
        curr.count += 1

    #search 
    def search(self, query: str):
        curr = self
        for i, c in enumerate(query):
            if c == "?":
                return curr.count
            curr = curr.children[c]
        return curr.count

    
##시작
def solution(words, queries):
    trie = [Trie() for _ in range(10001)]
    reverse_trie = [Trie() for _ in range(10001)]
    answer = []
       
    for word in words:
        trie[len(word)].insert(word)
        reverse_trie[len(word)].insert(word[::-1])
        
    #print(words)

    ##뺑뺑이 돌면서 words에서 찾음
    for query in queries:        
        if query[0] == "?":     
            ans = reverse_trie[len(query)].search(query[::-1])
            #print(ans)
        else:
            ans = trie[len(query)].search(query)
            #print(ans)
        answer.append(ans)

    return answer

#w = ['frodo', 'front', 'frost', 'frozen', 'frame', 'kakao']
#q = ['fro??', '????o', 'fr???', 'fro???', 'pro?']
#ret = solution(w, q)
#print(ret)
