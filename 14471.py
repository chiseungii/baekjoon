N, M = map(int, input().split())

costs = []
for i in range(M):
    A, B = map(int, input().split())

    if A >= N:
        costs.append(0)
    else:
        costs.append(N - A)
costs = sorted(costs)

sum = 0
for cost in costs[:len(costs)-1]:
    sum += cost

print(sum)
