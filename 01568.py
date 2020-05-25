N = int(input())

sec = 0
while N > 0:
    n = 1
    while (n ** 2 + n) // 2 <= N:
        n += 1
    n -= 1

    an = (n ** 2 + n) // 2
    sec += n
    N -= an

print(sec)
