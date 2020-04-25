while True:
    n1, n2, n3 = map(int, input().split())
    if not n1 and not n2 and not n3:
        break

    max_n = max(n1, n2, n3)
    sum = n1 * n1 + n2 * n2 + n3 * n3 - max_n * max_n
    max_n *= max_n

    if sum == max_n:
        print('right')
    else:
        print('wrong')
