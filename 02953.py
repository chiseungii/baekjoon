max = 0; max_num = 0
for i in range(5):
    a = list(map(int, input().split()))
    if sum(a) > max:
        max = sum(a)
        max_num = i + 1

print(max_num, max, sep=' ')
