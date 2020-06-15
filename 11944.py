N, M = map(int, input().split())
s = str(N)

lenght = len(s)
if lenght * N <= M:
    for i in range(N):
        print(N, end='')
    print()
else:
    for i in range(M // lenght):
        print(N, end='')
    for i in range(M % lenght):
        print(s[i], end='')
    print()
