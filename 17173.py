N, M = map(int, input().split())
Mi = list(map(int, input().split()))

sum = 0
for i in range(1, N + 1):
    for j in range(M):
        if i % Mi[j] == 0:
            sum += i
            break

print(sum)
