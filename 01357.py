def Rev(n):
    result = 0
    while n > 0:
        result *= 10
        result += n % 10
        n //= 10

    return result

X, Y = map(int, input().split())
print(Rev(Rev(X) + Rev(Y)))
