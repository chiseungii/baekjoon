N = int(input())

sum = 0
for i in range(2, N - 1, 2):
    sum += (N - i - 2) // 2

print(sum)
