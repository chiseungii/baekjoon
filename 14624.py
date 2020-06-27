N = int(input())

if N % 2:
    print('*' * N)
    print(' ' * (N // 2), '*', sep='')
    for i in range(1, N, 2):
        print(' ' * ((N - i - 2) // 2), '*', sep='', end='')
        print(' ' * i, '*', sep='')
else:
    print("I LOVE CBNU")
