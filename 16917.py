A, B, C, X, Y = map(int, input().split())

one = A * X + B * Y
two = C * min(X, Y) * 2 + (X - min(X, Y)) * A + (Y - min(X, Y)) * B
three = max(X, Y) * 2 * C

print(min(one, two, three))
