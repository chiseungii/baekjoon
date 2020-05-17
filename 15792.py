A, B = map(int, input().split())

print(A // B, end='.')
tmp = A % B
for i in range(1000):
    tmp *= 10
    a = tmp // B
    b = tmp % B
    print(a, end='')

    if b == 0: break
    else: tmp = b
print()
