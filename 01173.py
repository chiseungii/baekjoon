N, m, M, T, R = map(int, input().split())

if M - m < T: print(-1)
else:
    min = 0; mac = m
    while 1:
        min += 1
        if mac + T <= M:
            mac += T
            N -= 1
        else:
            mac -= R
            if mac < m: mac = m

        if N == 0: break

    print(min)
