N = int(input())

if N == 1: print('*')
else:
    print(' ' * (N - 1), '*', sep='')

    j = 1
    for i in range(N - 2, -1, -1):
        print(' ' * i, '*', ' ' * j, '*', sep='')
        j += 2
