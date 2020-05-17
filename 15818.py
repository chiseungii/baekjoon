N, M = map(int, input().split())
a = list(map(int, input().split()))

result = 1
for n in a:
    result *= n
    result %= M

print(result)
