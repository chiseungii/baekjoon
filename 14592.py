rank = []
for i in range(int(input())):
    S, C, L = map(int, input().split())
    rank.append((S, C, L, i + 1))

rank = sorted(rank, key=lambda x : (-x[0], x[1], x[2]))
print(rank[0][3])
