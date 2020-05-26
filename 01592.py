N, M, L = map(int, input().split())

ball = [0] * (N + 1)
ball[1] = 1

cnt = 0; throw_n = 1
while 1:
    if ball[throw_n] == M:
        break

    if ball[throw_n] % 2:
        cnt += 1
        throw_n += L
        if throw_n > N: throw_n -= N
        ball[throw_n] += 1
    else:
        cnt += 1
        throw_n -= L
        if throw_n < 1: throw_n += N
        ball[throw_n] += 1

print(cnt)
