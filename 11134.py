for i in range(int(input())):
    N, C = map(int, input().split())

    if N % C: print(N // C + 1)
    else: print(N // C)
