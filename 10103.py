a = 100; b = 100
for i in range(int(input())):
    n1, n2 = map(int, input().split())

    if n1 > n2: b -= n1
    elif n1 < n2: a -= n2

print(a, b, sep='\n')
