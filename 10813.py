N, M = map(int, input().split())
baskets = [i for i in range(N + 1)]

for i in range(M):
    I, J = map(int, input().split())
    baskets[I], baskets[J] = baskets[J], baskets[I]

for basket in baskets[1:]:
    print(basket, end=' ')
print()
