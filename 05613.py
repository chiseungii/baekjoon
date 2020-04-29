a = int(input())
while True:
    ops = input()
    if ops == '=':
        break

    b = int(input())
    if ops == '+':
        a += b
    elif ops == '-':
        a -= b
    elif ops == '*':
        a *= b
    else:
        a //= b

print(a)
