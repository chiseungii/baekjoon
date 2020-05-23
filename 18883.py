N, M = map(int, input().split())

num = 1
for i in range(N):
    for j in range(M - 1):
        print(num, end=' ')
        num += 1
    print(num)
    num += 1
