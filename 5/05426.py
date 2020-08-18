from math import sqrt

for i in range(int(input())):
    s = input()
    l = len(s); size = int(sqrt(l))

    index = 0; letter = []
    for j in range(size):
        letter.append(s[index:index+size])
        index += size

    for j in range(size-1, -1, -1):
        for k in range(size):
            print(letter[k][j], end='')
    print()
