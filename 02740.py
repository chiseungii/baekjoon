A = []
N, M = map(int, input().split())
for i in range(N):
    Ai = list(map(int, input().split()))
    A.append(Ai)

B = []
M, K = map(int, input().split())
for i in range(M):
    Bi = list(map(int, input().split()))
    B.append(Bi)

for i in range(N):
    for j in range(K):
        sum = 0
        for k in range(M):
            sum += A[i][k] * B[k][j]

        print(sum, end=' ')
    print()
