while 1:
    M, A, B = map(int, input().split())
    if not M and not A and not B: break

    time = M / A - M / B
    hour = int(time)
    time = (time - hour) * 60
    min = int(time)
    time = (time - min) * 60 + 0.5
    sec = int(time)

    print("%d:%02d:%02d" % (hour, min, sec))
