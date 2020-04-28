for i in range(int(input())):
    n = int(input())

    print(f"Pairs for {n}:", end=' ')
    if n % 2:
        if n == 1:
            print()
        else:
            print(1, n - 1, sep=' ', end='')
            for j in range(2, n // 2 + 1):
                print(',', j, n - j, sep=' ', end='')
            print()
    else:
        if n == 2:
            print()
        else:
            print(1, n - 1, sep=' ', end='')
            for j in range(2, n // 2):
                print(',', j, n - j, sep=' ', end='')
            print()
