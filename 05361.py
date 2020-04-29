parts = [350.34, 230.90, 190.55, 125.30, 180.90]
for i in range(int(input())):
    a = list(map(float, input().split()))

    sum = 0
    for j in range(5):
        sum += (parts[j] * a[j])

    print('$%.2f' % sum)
