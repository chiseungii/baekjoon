a, m = map(int, input().split())

i = 1
while 1:
    if (a * i - 1) % m == 0:
        print(i)
        break
    else:
        i += 1
