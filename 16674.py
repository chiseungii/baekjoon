N = int(input())

two = one = zero = eight = other = 0
while N > 0:
    a = N % 10

    if a == 2: two += 1
    elif a == 1: one += 1
    elif a == 0: zero += 1
    elif a == 8: eight += 1
    else: other += 1

    N //= 10

if other: print(0)
elif not two or not one or not zero or not eight:
    print(1)
elif two == one and two == zero and two == eight:
    print(8)
else: print(2)
