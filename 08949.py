def heejoo_sum(a, b):
    dis = len(a) - len(b)
    print(a[:dis], end='')

    for i in range(len(b)):
        anum = int(a[i + dis])
        bnum = int(b[i])
        print(anum + bnum, end='')

    print()

a, b = input().split()

if len(a) >= len(b):
    heejoo_sum(a, b)
else:
    heejoo_sum(b, a)
