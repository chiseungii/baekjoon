N, M = map(int, input().split())

coins = []
for i in range(N):
    s = input()
    coin = []
    for j in range(len(s)):
        coin.append(int(s[j]))

    coins.append(coin)

cnt = 0
for i in range(N - 1, -1, -1):
    for j in range(M - 1, -1, -1):
        if coins[i][j] == 1:
            cnt += 1
            for a in range(i + 1):
                for b in range(j + 1):
                    if coins[a][b] == 0: coins[a][b] = 1
                    else: coins[a][b] = 0

print(cnt)
