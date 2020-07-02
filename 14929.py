n = int(input())

x = list(map(int, input().split()))
sum_x = sum(x)

result = 0
for i in range(n - 1):
    sum_x -= x[i]
    result += sum_x * x[i]

print(result)
