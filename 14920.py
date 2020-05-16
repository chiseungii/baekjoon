C1 = int(input())

Cn = C1; n = 1
while Cn != 1:
    before = Cn
    mod = before % 2
    Cn = mod * (3 * before + 1) + (1 - mod) * (before // 2)
    n += 1

print(n)
