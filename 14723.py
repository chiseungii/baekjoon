N = int(input())

n = 1
while 1:
    an = (n ** 2 - n + 2) // 2
    if an == N: break
    elif an > N:
        n -= 1
        break

    n += 1

a = n; b = 1
an = (n ** 2 - n + 2) // 2
dis = N - an
a -= dis; b += dis

print(a, b)
