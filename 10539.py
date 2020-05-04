N = int(input())
B = list(map(int, input().split()))

sum = 0
for i in range(N):
    tmp = B[i] * (i + 1) - sum
    print(tmp, end=' ')
    sum += tmp
print()
