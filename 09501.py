for i in range(int(input())):
    N, D = map(int, input().split())

    cnt = 0
    for j in range(N):
        v, f, c = map(int, input().split())

        time = D / v
        available_time = f / c
        if available_time >= time: cnt += 1

    print(cnt)
