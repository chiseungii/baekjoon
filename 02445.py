N = int(input())

for i in range(1, N + 1):
    print('*' * i, ' ' * ((N - i) * 2), '*' * i, sep='')
for i in range(N - 1, 0, -1):
    print('*' * i, ' ' * ((N - i) * 2), '*' * i, sep='')
