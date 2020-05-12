def toOctal(n):
    base = 1; result = 0
    while n > 0:
        a = n % 10
        if a >= 8: return 0

        result += (a * base)
        base *= 8
        n //= 10

    return result

def toHexa(n):
    base = 1; result = 0
    while n > 0:
        a = n % 10
        result += (a * base)
        base *= 16
        n //= 10

    return result

for i in range(int(input())):
    K, num = map(int, input().split())
    print(K, toOctal(num), num, toHexa(num))
