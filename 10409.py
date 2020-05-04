n, T = map(int, input().split())
times = list(map(int, input().split()))

cnt = 0
for i in times:
    if i > T: break

    T -= i
    cnt += 1

print(cnt)
