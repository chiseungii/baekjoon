import sys

MOD = 1000000007
H, x = map(int, sys.stdin.readline().split())

sum = 0; snowball = 1
for i in range(H):
    c = int(sys.stdin.readline())

    snowball *= x
    snowball %= MOD
    sum += snowball * c
    sum %= MOD

print(sum)
