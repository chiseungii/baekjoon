def reverse_num(n):
    result = 0
    while n > 0:
        result = result * 10 + n % 10
        n //= 10

    return result

N, K = map(int, input().split())
multiple = [reverse_num((i + 1) * N) for i in range(K)]

max_mul = multiple[0]
for i in range(1, K):
    if multiple[i] > max_mul:
        max_mul = multiple[i]

print(max_mul)
