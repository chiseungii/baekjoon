for i in range(int(input())):
    d, n, s, p = map(int, input().split())

    par = n * p + d
    nopar = n * s
    if par == nopar: print("does not matter")
    elif par > nopar: print("do not parallelize")
    else: print("parallelize")
