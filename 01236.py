N, M = map(int, input().split())

castle = []
for i in range(N):
    castle.append(input())

cnt_N = 0
for i in range(N):
    exist = False
    for j in range(M):
        if castle[i][j] == 'X':
            exist = True
            break

    if not exist: cnt_N += 1

cnt_M = 0
for i in range(M):
    exist = False
    for j in range(N):
        if castle[j][i] == 'X':
            exist = True
            break

    if not exist: cnt_M += 1

print(max(cnt_N, cnt_M))
