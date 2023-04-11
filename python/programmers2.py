def solution(N, number):

    if N == number: 
        return 1
    
    #초기화
    mm = [set() for _ in range(8)]     
    #print(mm)

    for i in range(1, 9): #1~8
        mm[i-1].add(int(str(N)*i)) 
        print(mm)
        for j in range(i-1):
            for x in mm[j]:
                for y in mm[i-2-j]:
                    mm[i-1].add(x+y)
                    mm[i-1].add(x-y)
                    mm[i-1].add(x*y)
                    if y != 0:
                        mm[i-1].add(x//y) ##나머지 무시
        if number in mm[i-1]:
            return i

    return -1 # 최소값이 8보다 크면 -1 반환


ret = solution(5, 12)
print(ret)
