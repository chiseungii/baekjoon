while True:
    B, N = map(int, input().split())
    if not B and not N:
        break
        
    A = 1
    while pow(A, N) < B:
        A += 1
        
    if pow(A, N) == B:
        print(A)
    else:
        small = abs(pow(A - 1, N) - B)
        big = abs(pow(A, N) - B)
        
        if small < big:
            print(A - 1)
        else:
            print(A)
