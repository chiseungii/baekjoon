from math import sqrt

N = int(input())

cnt = 1
for i in range(2, int(sqrt(N)) + 1):
    if N % i == 0: cnt += 1

cnt *= 2
if int(sqrt(N)) ** 2 == N:
    cnt -= 1

print(cnt)
