trues = [0] * 100001
N = int(input())

a = list(map(int, input().split()))
for n in a:
    trues[n] += 1

cnt = 0
for i in range(100000, -1, -1):
    if trues[i] == i:
        print(i)
        break
else: print(-1)
