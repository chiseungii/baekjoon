def digital_root(n):
    result = 0
    while n:
        result += (n % 10)
        n //= 10

    return result

while True:
    n = int(input())
    if not n:
        break

    while n // 10:
        n = digital_root(n)
    print(n)
