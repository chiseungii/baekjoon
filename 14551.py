N, M = map(int, input().split())

result = 1
for i in range(N):
    A = int(input())

    if A:
        result = result * A % M

print(result % M)
