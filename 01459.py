X, Y, W, S = map(int, input().split())
if X < Y: X, Y = Y, X

mod = (X + Y) % 2
a = (X + Y) * W
b = (X - mod) * S + mod * W
c = Y * S + (X - Y) * W

print(min(a, b, c))
