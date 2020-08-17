def d(n):
    sum = n
    while n > 0:
        sum += n % 10
        n //= 10

    return sum

nums = []
for i in range(10001):
    nums.append(True)

for i in range(1, 10001):
    if nums[i]:
        a = i
        while 1:
            a = d(a)

            if a > 10000: break
            else: nums[a] = False

for i in range(1, 10001):
    if nums[i]: print(i)
