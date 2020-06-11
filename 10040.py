N, M = map(int, input().split())

funny = []
for i in range(N):
    funny.append(int(input()))
vote = [0] * N

for i in range(M):
    B = int(input())

    for j in range(N):
        if funny[j] <= B:
            vote[j] += 1
            break

max = vote[0]; max_index = 1
for i in range(1, N):
    if vote[i] > max:
        max = vote[i]
        max_index = i + 1

print(max_index)
