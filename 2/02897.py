def cars(a, b, c, d):
    if a == '#' or b == '#' or c == '#' or d == '#':
        return -1
    else:
        cnt = 0
        if a == 'X': cnt += 1
        if b == 'X': cnt += 1
        if c == 'X': cnt += 1
        if d == 'X': cnt += 1

        return cnt

R, C = map(int, input().split())
parking = []
for i in range(R):
    parking.append(input())

cnt = [0, 0, 0, 0, 0]
for i in range(R - 1):
    for j in range(C - 1):
        a = cars(parking[i][j], parking[i][j+1], parking[i+1][j], parking[i+1][j+1])
        if a != -1: cnt[a] += 1

for c in cnt:
    print(c)
