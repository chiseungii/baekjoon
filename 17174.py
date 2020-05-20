N, M = map(int, input().split())

cnt = 0
while N >= M:
    cnt += N
    N //= M
cnt += N

print(cnt)
