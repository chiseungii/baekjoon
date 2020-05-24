X = int(input())

n = 1
while (n * n + n) // 2 < X:
    n += 1

an = (n * n + n) // 2
dis = an - X
if n % 2:
    up = 1 + dis
    down = n - dis
else:
    up = n - dis
    down = 1 + dis

print(up, '/', down, sep='')
