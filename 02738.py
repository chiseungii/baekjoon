N, M = map(int, input().split())

A = []
for i in range(N):
    Ai = list(map(int, input().split()))
    A.append(Ai)

B = []
for i in range(N):
    Bi = list(map(int, input().split()))
    B.append(Bi)

for i in range(N):
    for j in range(M):
        print(A[i][j] + B[i][j], end=' ')
    print()
