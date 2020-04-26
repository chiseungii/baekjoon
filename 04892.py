num = 1
while True:
    n0 = int(input())
    if not n0:
        break

    print(f"{num}.", end=' ')
    num += 1

    n1 = 3 * n0
    if n1 % 2:
        print('odd', end=' ')
        n2 = (n1 + 1) // 2
    else:
        print('even', end=' ')
        n2 = n1 // 2

    n3 = 3 * n2
    n4 = n3 // 9
    print(n4)
