for i in range(int(input())):
    N, M = map(int, input().split())

    one_leg = M * 2 - N
    print(one_leg, M - one_leg)
