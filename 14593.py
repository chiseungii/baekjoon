P = []
for i in range(int(input())):
    S, C, L = map(int, input().split())
    P.append([i + 1, S, C, L])
P = sorted(P, key=lambda x: (-x[1], x[2], x[3]))

print(P[0][0])
