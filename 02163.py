N, M = map(int, input().split())
chocolate = [[0 for i in range(301)] for j in range(301)]

def DP(N, M):
    for i in range(2, M + 1):
        chocolate[1][i] = i - 1
    for i in range(2, N + 1):
        chocolate[i][1] = i - 1

    for i in range(2, N + 1):
        for j in range(2, M + 1):
            if j % 2 == 0:
                chocolate[i][j] = chocolate[i][j // 2] * 2 + 1
            else:
                chocolate[i][j] = chocolate[i][j // 2] + chocolate[i][j // 2 + 1] + 1

DP(N, M)
print(chocolate[N][M])
