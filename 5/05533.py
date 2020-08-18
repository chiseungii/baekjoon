N = int(input())
nums = []; sums = []
for i in range(N):
    nums.append(list(map(int, input().split())))
    sums.append(0)

for i in range(3):
    for j in range(N):
        cnt = 0
        for k in range(N):
            if nums[k][i] == nums[j][i]: cnt += 1

        if cnt == 1: sums[j] += nums[j][i]

for sum in sums:
    print(sum)
