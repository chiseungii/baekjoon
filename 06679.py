def sum_num(n, base):
    sum = 0
    while n:
        sum += n % base
        n //= base

    return sum

print(2992)
for i in range(2993, 10000):
    ten = sum_num(i, 10)
    twelve = sum_num(i, 12)
    sixteen = sum_num(i, 16)

    if ten == twelve and ten == sixteen:
        print(i)
