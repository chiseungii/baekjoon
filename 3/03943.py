import sys

DP = [0, 1]
for i in range(2, 100001):
    if i % 2 == 0: DP.append(max(i, DP[i // 2]))
    else:
        tmp = i * 3 + 1
        max_tmp = tmp
        while tmp > i:
            if tmp % 2 == 0: tmp //= 2
            else: tmp = tmp * 3 + 1

            if tmp > max_tmp: max_tmp = tmp

        DP.append(max(DP[tmp], max_tmp))

for i in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    print(DP[n])
