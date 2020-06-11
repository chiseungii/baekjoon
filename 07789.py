def isPrime(n):
    cnt = 0
    for i in range(1, n + 1):
        if n % i == 0: cnt += 1

    return cnt == 2

n1, n2 = map(int, input().split())

if isPrime(n1) and isPrime(n2 * 1000000 + n1):
    print("Yes")
else:
    print("No")
