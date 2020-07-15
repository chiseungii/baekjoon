def isMinsoo(n):
    result = True
    while n > 0:
        if n % 10 != 4 and n % 10 != 7:
            result = False

        n //= 10

    return result

for i in range(int(input()), 3, -1):
    if isMinsoo(i):
        print(i)
        break
