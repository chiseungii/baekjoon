while 1:
    S = int(input())
    if not S: break

    while 1:
        print(S, end=' ')
        if S < 10: break

        mul = 1
        while S > 0:
            mul *= S % 10
            S //= 10

        S = mul

    print()
