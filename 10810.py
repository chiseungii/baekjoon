N, M = map(int, input().split())
baskets = [0] * (N + 1)

for i in range(M):
    I, J, K = map(int, input().split())

    for j in range(I, J + 1):
        baskets[j] = K

for basket in baskets[1:]:
    print(basket, end=' ')
print()
