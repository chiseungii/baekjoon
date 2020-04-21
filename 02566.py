max_n = 0
for i in range(9):
    a = list(map(int, input().split()))

    max_a = max(a)
    if max_a > max_n:
        max_n = max_a
        max_i = i + 1
        max_j = a.index(max_a) + 1

print(max_n)
print(max_i, max_j, sep=' ')
