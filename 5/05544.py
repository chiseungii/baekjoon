N = int(input())
scores = [0] * (N + 1)

for i in range(N*(N-1)//2):
    A, B, C, D = map(int, input().split())

    if C == D:
        scores[A] += 1
        scores[B] += 1
    elif C > D: scores[A] += 3
    else: scores[B] += 3

rank = []
for i in range(1, N+1):
    rank.append([i, scores[i]])
rank.sort(key=lambda x: -x[1])

last = rank[0][1]; rank_cnt = 1
rank[0][1] = 1
for i in range(1, len(rank)):
    rank_cnt += 1
    if rank[i][1] == last:
        rank[i][1] = rank[i-1][1]
    else:
        last = rank[i][1]
        rank[i][1] = rank_cnt
rank.sort(key=lambda x: x[0])

for r in rank:
    print(r[1])
