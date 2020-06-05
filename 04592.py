while 1:
    N = list(map(int, input().split()))
    if N[0] == 0: break

    num = -1
    for i in range(1, len(N)):
        if N[i] != num:
            num = N[i]
            print(num, end=' ')

    print('$')
