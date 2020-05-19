def cal(a, b, op):
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
    else:
        if a * b < 0:
            a = abs(a)
            b = abs(b)
            return -(a // b)
        else:
            return a // b

K1, op1, K2, op2, K3 = input().split()
K1, K2, K3 = int(K1), int(K2), int(K3)

tmp = cal(K1, K2, op1)
result1 = cal(tmp, K3, op2)
tmp = cal(K2, K3, op2)
result2 = cal(K1, tmp, op1)

if result1 < result2:
    print(result1, result2, sep='\n')
else:
    print(result2, result1, sep='\n')
