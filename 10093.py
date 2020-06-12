A, B = map(int, input().split())

nums = [i for i in range(min(A, B) + 1, max(A, B))]
print(len(nums))
for num in nums:
    print(num, end=' ')
print()
