def isYoon(year):
    if year % 4 == 0 and year % 100: return 1
    if year % 400 == 0: return 1

    return 0

days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30]
while 1:
    d, m, y = map(int, input().split())
    if d == 0 and m == 0 and y == 0: break

    yoon = isYoon(y)
    day_sum = 0
    for i in range(1, m):
        if i == 2: day_sum += days[i] + yoon
        else: day_sum += days[i]
    day_sum += d

    print(day_sum)
