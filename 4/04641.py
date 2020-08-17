while 1:
    nums = list(map(int, input().split()))
    if nums[0] == -1: break
    nums = sorted(nums[:len(nums)-1])

    cnt = 0
    for i in range(len(nums) - 1):
        for j in range(i + 1, len(nums)):
            if nums[j] == nums[i] * 2:
                cnt += 1
                break

    print(cnt)
