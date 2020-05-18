from math import sqrt

N = int(input())

start_x, start_y = map(int, input().split())
before_x = start_x; before_y = start_y
distance = 0
for i in range(N - 1):
    x, y = map(int, input().split())

    tmp = int(sqrt((x - before_x) ** 2 + (y - before_y) ** 2))
    distance += tmp
    before_x = x; before_y = y

tmp = int(sqrt((start_x - before_x) ** 2 + (start_y - before_y) ** 2))
distance += tmp
print(distance)
