n = list(map(int, input().split()))

cnt = 0
for i in n:
    if i > 0: cnt += 1

print(cnt)
