
def main():
    field = [ [0,1,0,1], [0,0,0,1], [1,1,1,0], [0,1,1,1] ]
    mines = [ [0,0,0,0], [0,0,0,0], [0,0,0,0], [0,0,0,0] ]

    w = 4
    h = 4

    for y in range(h):
        for x in range(w):
            print(field[y][x])
            #if (field[y][x] == 0) continue;

#def chkover(w, h, j, i):



main()