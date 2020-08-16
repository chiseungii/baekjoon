global H, M

def plusMin():
    global H, M

    M += 1
    if M == 60:
        H += 1
        M = 0
    if H == 24:
        H = 0

price = 0
for i in range(int(input())):
    time, D = input().split()
    H, M = map(int, time.split(':'))
    D = int(D)

    for j in range(D):
        if H >= 7 and H < 19: price += 10
        else: price += 5

        plusMin()

print(price)
