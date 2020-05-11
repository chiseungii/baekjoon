A, B, N = map(int, input().split())

for i in range(1, N + 1):
    print((A + B) * i + A * (N - i), end=' ')
print()
