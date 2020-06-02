def beauty(n):
    num = []
    while n > 0:
        if n % 10 not in num:
            num.append(n % 10)
        n //= 10

    return len(num)

for i in range(int(input())):
    X = int(input())
    print(beauty(X))
