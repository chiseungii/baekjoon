N = int(input())
classes = list(map(int, input().split()))
B, C = map(int, input().split())

cnt = N
for i in range(N):
    c = classes[i] - B
    if c < 0: c = 0

    if c:
        if c % C:
            cnt += c // C + 1
        else:
            cnt += c // C

print(cnt)
