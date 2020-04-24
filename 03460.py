for i in range(int(input())):
    bin = [0 for i in range(21)]
    n = int(input())

    two = 2; index = 1
    while two <= n:
        two *= 2; index += 1
    two /= 2; index -= 1

    while n > 0:
        if two <= n:
            n -= two
            bin[index] = 1

        two /= 2
        index -= 1

    for j in range(21):
        if bin[j]:
            print(j, end=' ')
    print()
