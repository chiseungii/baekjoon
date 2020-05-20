A, B = map(int, input().split())

M = (B - A) / 400
prob = 1 / (1 + 10 ** M)

print("%.4f" % prob)
