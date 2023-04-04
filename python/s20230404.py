
i = 1
j = 1

for i in range(1, 10):
    print(i, '|', end = ' ')
    
    for j in range(1, 10):
        print(format(i * j, ">3d"), end = ' ')
    print("")