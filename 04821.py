while 1:
    page = int(input())
    if not page: break

    check = [0] * (page + 1)
    prnts = list(input().split(','))
    for prnt in prnts:
        if '-' in prnt:
            n1, n2 = map(int, prnt.split('-'))
            for i in range(n1, n2 + 1):
                if i <= page:
                    check[i] = 1
        else:
            n1 = int(prnt)
            if n1 <= page:
                check[n1] = 1

    print(check.count(1))
