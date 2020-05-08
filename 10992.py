N = int(input())

if N == 1: print('*')
else:
    print(' ' * (N - 1), '*', sep='')

    j = 1
    for i in range(N - 2, 0, -1):
        print(' ' * i, '*', ' ' * j, '*', sep='')
        j += 2

    print('*' * (N * 2 - 1))
