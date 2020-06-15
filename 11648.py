s = input()

cnt = 0
while len(s) > 1:
    cnt += 1
    mul = 1
    for i in range(len(s)):
        mul *= int(s[i])

    s = str(mul)

print(cnt)
