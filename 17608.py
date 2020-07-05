import sys

N = int(sys.stdin.readline())
sticks = []
for i in range(N):
    sticks.append(int(sys.stdin.readline()))

cnt = max = 0
while len(sticks) > 0:
    a = sticks.pop()
    if a > max:
        cnt += 1
        max = a

print(cnt)
