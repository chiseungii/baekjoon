N = int(input())
F = int(input())

mod = N % F
result = N % 100
if result >= mod: result -= mod
else: result = result + F - mod
result %= F

print("%02d" % result)
