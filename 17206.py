import sys

DP = [25] * 11
for i in range(11, 80001):
    if i % 3 == 0 or i % 7 == 0:
        DP.append(DP[-1] + i)
    else: DP.append(DP[-1])

sys.stdin.readline()
N = list(map(int, sys.stdin.readline().split()))

for Ni in N:
    print(DP[Ni])
