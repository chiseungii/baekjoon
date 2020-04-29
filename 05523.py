import sys

cnt_A = 0; cnt_B = 0
for i in range(int(input())):
    A, B = map(int, sys.stdin.readline().split())

    if A > B:
        cnt_A += 1
    elif A < B:
        cnt_B += 1

print(cnt_A, cnt_B, sep=' ')
