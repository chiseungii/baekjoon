N = int(input())

trophy = []
for i in range(N):
    trophy.append(int(input()))

cnt = 0; max_trophy = 0
for h in trophy:
    if h > max_trophy:
        cnt += 1
        max_trophy = h
print(cnt)

cnt = 0; max_trophy = 0
for i in range(N - 1, -1, -1):
    if trophy[i] > max_trophy:
        cnt += 1
        max_trophy = trophy[i]
print(cnt)
