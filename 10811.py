N, M = map(int, input().split())
baskets = [i for i in range(N + 1)]

for i in range(M):
    I, J = map(int, input().split())

    for j in range((J - I) // 2 + 1):
        baskets[I + j], baskets[J - j] = baskets[J - j], baskets[I + j]

for basket in baskets[1:]:
    print(basket, end=' ')
print()
