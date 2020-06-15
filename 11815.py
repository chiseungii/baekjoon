N = int(input())
nums = list(map(int, input().split()))

for num in nums:
    if int(num ** 0.5) ** 2 == num:
        print(1, end=' ')
    else:
        print(0, end=' ')
