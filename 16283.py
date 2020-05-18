a, b, n, w = map(int, input().split())

r1 = r2 = -1; cnt = 0
for i in range(1, n):
    if i * a + (n - i) * b == w:
        r1 = i; r2 = n - i
        cnt += 1

if (r1 == -1 and r2 == -1) or cnt != 1:
    print(-1)
else:
    print(r1, r2)
