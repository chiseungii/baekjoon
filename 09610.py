q1 = 0; q2 = 0; q3 = 0; q4 = 0; axis = 0
for i in range(int(input())):
    x, y = map(int, input().split())

    if not x or not y: axis += 1
    elif x > 0 and y > 0: q1 += 1
    elif x < 0 and y > 0: q2 += 1
    elif x < 0 and y < 0: q3 += 1
    else: q4 += 1

print("Q1: %d" % q1)
print("Q2: %d" % q2)
print("Q3: %d" % q3)
print("Q4: %d" % q4)
print("AXIS: %d" %axis)
