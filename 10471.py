W, P = map(int, input().split())

part = list(map(int, input().split()))
part.insert(0, 0)
part.append(W)

weight = []
for i in range(P + 1):
    for j in range(i + 1, P + 2):
        weight.append(part[j] - part[i])

weight = sorted(list(set(weight)))
for w in weight:
    print(w, end=' ')
print()
