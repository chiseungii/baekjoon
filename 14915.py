def switfBase(n, base):
    a = 1; cnt = 1
    while a <= n:
        a *= base
        cnt += 1
    a //= base
    cnt -= 1

    result = ""
    for i in range(cnt):
        tmp = n // a
        if tmp == 10:
            c = 'A'
        elif tmp == 11:
            c = 'B'
        elif tmp == 12:
            c = 'C'
        elif tmp == 13:
            c = 'D'
        elif tmp == 14:
            c = 'E'
        elif tmp == 15:
            c = 'F'
        else:
            c = str(tmp)
        result += c

        n %= a
        a //= base

    return result

m, n = map(int, input().split())

if n == 10 or m == 0:
    print(m)
else:
    print(switfBase(m, n))
