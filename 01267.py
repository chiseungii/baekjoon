# 핸드폰 요금

N = int(input())
calls = list(map(int, input().split()))

Y = 0; M = 0
for i in range(N):
    Y += ((calls[i] // 30 + 1) * 10)
    M += ((calls[i] // 60 + 1) * 15)

if Y < M:
    print('Y', Y, sep=' ')
elif Y > M:
    print('M', M, sep=' ')
else:
    print('Y M', Y, sep=' ')
