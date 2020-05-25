N, K = map(int, input().split())
n = list(map(int, input().split(',')))

for i in range(K):
    for j in range(N - 1):
        n[j] = n[j + 1] - n[j]
    N -= 1

for i in range(N - 1):
    print(n[i], end=',')
print(n[N - 1])
