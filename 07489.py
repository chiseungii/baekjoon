for i in range(int(input())):
    n = int(input())

    a = 1
    for j in range(1, n + 1):
        a *= j
        while a % 10 == 0: a //= 10
        a %= 1000000000

    print(a % 10)
