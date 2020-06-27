import sys

N = int(sys.stdin.readline())
peaks = list(map(int, sys.stdin.readline().split()))

a, b, m, M = 0, 1, 0, 0
while b < N:
    if peaks[a] > peaks[b]:
        m += 1
        b += 1
    else:
        M, m = max(m, M), 0
        a, b = b, b + 1

print(max(m, M))
