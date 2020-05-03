for i in range(int(input())):
    N, D, A, B, F = map(float, input().split())
    N = int(N)

    time = D / (A + B)
    print("%d %.6f" % (N, F * time))
