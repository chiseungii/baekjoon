N = int(input())
M = int(input())
targets = list(map(int, input().split()))

friends = [0] * (N + 1)
for i in range(M):
    cnt = 0
    B = list(map(int, input().split()))
    B.insert(0, 0)
    for j in range(1, N + 1):
        if B[j] == targets[i]:
            friends[j] += 1
            cnt += 1

    friends[targets[i]] += (N - cnt)

for friend in friends[1:]:
    print(friend)
