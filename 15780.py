N, K = map(int, input().split())
a = list(map(int, input().split()))

tap = 0
for i in a:
    if i % 2:
        tap += (i // 2 + 1)
    else:
        tap += (i // 2)

if N <= tap:
    print("YES")
else:
    print("NO")
