import sys

base = [1, 2, 6, 24, 120]
while True:
    n = int(sys.stdin.readline())
    if not n:
        break

    factorial = 0
    result = 0
    while n:
        result += ((n % 10) * base[factorial])
        factorial += 1
        n //= 10

    print(result)
