while 1:
    a, b = map(int,input().split())
    if not a and not b: break

    r1 = a // b
    r2 = a % b
    print(r1, r2, '/', b)
