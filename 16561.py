n = int(input())

cnt = 0
for i in range(3, n - 5, 3):
    for j in range(3, n - i - 2, 3):
        cnt += 1

print(cnt)
