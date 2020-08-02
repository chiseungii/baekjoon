from math import sqrt

M = int(input())
N = int(input())

sum = 0
for i in range(N, M-1, -1):
    if int(sqrt(i)) ** 2 == i:
        sum += i
        m = i

if sum == 0: print(-1)
else: print(sum, m, sep='\n')
