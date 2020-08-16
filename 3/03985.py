L = int(input())
N = int(input())
cake = [0] * (L + 1)

max_respect = -1; max_guest = -1
max_real = -1; max_real_guest = -1
for i in range(N):
    P, K = map(int, input().split())
    cnt = K - P + 1

    if cnt > max_respect:
        max_respect = cnt
        max_guest = i + 1

    for j in range(P, K + 1):
        if cake[j]: cnt -= 1
        else: cake[j] = i + 1

    if cnt > max_real:
        max_real = cnt
        max_real_guest = i + 1

print(max_guest, max_real_guest, sep='\n')
