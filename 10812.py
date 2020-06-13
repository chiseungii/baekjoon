N, M = map(int, input().split())
baskets = [i for i in range(N + 1)]

for i in range(M):
    I, J, K = map(int, input().split())

    tmp = [baskets[j] for j in range(I, K)]

    dis = K - I;
    for j in range(K, J + 1):
        baskets[j - dis] = baskets[j]
        index = j
    index += 1

    tmp_index = 0; index -= dis
    for j in range(index, J + 1):
        baskets[j] = tmp[tmp_index]
        tmp_index += 1

for basket in baskets[1:]:
    print(basket, end=' ')
print()
