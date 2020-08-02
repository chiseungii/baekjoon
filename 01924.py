days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30]
x, y = map(int, input().split())

day = 0
for i in range(1, x):
    day += days[i - 1]
day += y - 1

week = day % 7
if week == 0:
    print("MON")
elif week == 1:
    print("TUE")
elif week == 2:
    print("WED")
elif week == 3:
    print("THU")
elif week == 4:
    print("FRI")
elif week == 5:
    print("SAT")
else:
    print("SUN")
