line = [False] * 10001

def draw(x, y):
    for i in range(x, y):
        line[i] = True

for i in range(int(input())):
    x, y = map(int, input().split())

    if x < y:
        draw(x, y)
    else:
        draw(y, x)

cnt = 0
for i in range(1, 10001):
    if line[i]:
        cnt += 1

print(cnt)
