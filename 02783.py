seven_X, seven_Y = map(int, input().split())
min_cost = seven_X / seven_Y * 1000

for i in range(int(input())):
    X, Y = map(int, input().split())
    cost = X / Y * 1000

    min_cost = min(min_cost, cost)

print('%.2f' % (min_cost))
