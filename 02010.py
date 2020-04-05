import sys

N = int(input())
a = [sys.stdin.readline() for i in range(N)]
plug = sum(list(map(int, a))) - N + 1

print(plug)
