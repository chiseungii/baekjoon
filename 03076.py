R, C = map(int, input().split())
A, B = map(int, input().split())

black1 = True
for i in range(R):
    row = ""; black2 = black1
    for j in range(C):
        if black2:
            for k in range(B):
                row += 'X'
        else:
            for k in range(B):
                row += '.'

        black2 = not black2

    for j in range(A):
        print(row)

    black1 = not black1
