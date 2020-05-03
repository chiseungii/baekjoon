rec = [0, 1]

def cnt(n):
    start = 1; end = n
    cnt = 0
    while True:
        if start > end:
            break

        if n % start == 0:
            cnt += 1
            end = n // start - 1
        start += 1

    return cnt

n = int(input())
for i in range(2, n + 1):
    rec.append(rec[i - 1] + cnt(i))

print(rec[n])
