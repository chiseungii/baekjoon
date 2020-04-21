min_n = 100; sum = 0
for i in range(7):
    a = int(input())

    if a % 2:
        sum += a
        min_n = min(min_n, a)

if sum == 0:
    print(-1)
else:
    print(sum, min_n, sep='\n')
