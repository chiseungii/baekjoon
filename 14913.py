a, d, k = map(int, input().split())

if (k - a) % d:
    print('X')
else:
    n = (k - a) // d + 1

    if n <= 0:
        print('X')
    else:
        print(n)
