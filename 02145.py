while 1:
    N = int(input())
    if not N: break

    while N // 10:
        tmp = 0
        while N > 0:
            tmp += N % 10
            N //= 10
        N = tmp

    print(N)
