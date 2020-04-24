x1, y1 = map(int, input().split())
x2 = 0; y2 = 0
for i in range(2):
    a, b = map(int, input().split())

    if a == x1:
        x1 = 0
    else:
        if a == x2:
            x2 = 0
        else:
            x2 = a

    if b == y1:
        y1 = 0
    else:
        if b == y2:
            y2 = 0
        else:
            y2 = b

if x1 == 0:
    a = x2
else:
    a = x1

if y1 == 0:
    b = y2
else:
    b = y1

print(a, b, sep=' ')
