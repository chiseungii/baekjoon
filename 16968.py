s = input()

sum = 1
before = 'a'

for i in range(len(s)):
    c = s[i]

    if c == 'c':
        if before == 'c': sum *= 25
        else: sum *= 26
    else:
        if before == 'd': sum *= 9
        else: sum *= 10

    before = c

print(sum)
