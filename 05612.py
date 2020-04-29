n = int(input())
m = int(input())

max = m; zero = False
for i in range(n):
    IN, OUT = map(int, input().split())

    m += IN; m -= OUT
    if m < 0:
        zero = True
    if m > max:
        max = m

if zero:
    print(0)
else:
    print(max)
