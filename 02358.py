xy = []
for i in range(int(input())):
    xy.append(list(map(int, input().split())))

line = 0

x = sorted(xy, key=lambda w: w[0])
cnt = 1; num = x[0][0]
for i in range(1, len(x)):
    if x[i][0] == num:
        cnt += 1
    else:
        line += (cnt >= 2)
        cnt = 1
        num = x[i][0]
line += (cnt >= 2)

y = sorted(xy, key=lambda w: w[1])
cnt = 1; num = y[0][1]
for i in range(1, len(y)):
    if y[i][1] == num:
        cnt += 1
    else:
        line += (cnt >= 2)
        cnt = 1
        num = y[i][1]
line += (cnt >= 2)

print(line)
