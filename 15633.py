n = int(input())

if n == 1:
    print(-19)
else:
    sum = n + 1
    for i in range(2, n):
        if n % i == 0:
            sum += i

    print(sum * 5 - 24)
