computers = [False] * 101

input()
n = list(map(int, input().split()))

cnt = 0
for ni in n:
    if computers[ni]: cnt += 1
    else: computers[ni] = True

print(cnt)
