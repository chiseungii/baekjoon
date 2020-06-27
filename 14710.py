hour, min = map(int, input().split())

theta2 = min / 12
if hour % 30 == theta2:
    print("O")
else:
    print("X")
