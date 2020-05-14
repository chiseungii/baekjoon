a, b = map(int, input().split())

sum = 0
for i in range(1, a):
    sum += i
result = 1
for i in range(b - a + 1):
    sum += (a + i)
    result *= sum
    result %= 14579

print(result)
