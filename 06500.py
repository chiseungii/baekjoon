while 1:
    a = int(input())
    if not a: break

    cnt = 1
    an = [a]
    while 1:
        a *= a
        a %= 1000000
        a //= 100

        if a in an:
            break

        an.append(a)
        cnt += 1

    print(cnt)
