N, Q = map(int, input().split())
days = [0] * (N + 1)

for i in range(Q):
    a, b, c = map(int, input().split())

    if a == 1:
        days[b] += c
    else:
        change = 0
        for j in range(b, c + 1):
            change += days[j]

        print(change)
