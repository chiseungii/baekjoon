sales = {'R': 0.45, 'G': 0.3, 'B': 0.2, 'Y': 0.15, 'O': 0.1, 'W': 0.05}
for i in range(int(input())):
    cost, dots, coupon, credit = input().split()
    cost = float(cost)

    cost -= cost * sales[dots]

    if coupon == 'C': cost -= cost * 0.05

    if credit == 'C':
        cost = round(cost - 0.01, 1)
    else:
        cost = round(cost, 2)

    print("$%.2f" % cost)
