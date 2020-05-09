import sys

for line in sys.stdin:
    A, B, C = map(int, line.split())
    if B - A >= C - B:
        print(B - A - 1)
    else:
        print(C - B - 1)
