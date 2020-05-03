K = int(input())
N = int(input())

T = []; Z = []
for i in range(N):
    t, z = input().split()
    T.append(int(t)); Z.append(z)

time = 210
for i in range(N):
    if T[i] >= time: break

    time -= T[i]
    if Z[i] == 'T':
        K = 1 if K == 8 else K + 1

print(K)
