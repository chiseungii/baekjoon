import sys

for string in sys.stdin:
    cnt = [0, 0, 0, 0]
    for c in string:
        if c.isdigit():
            cnt[2] += 1
        elif c == ' ':
            cnt[3] += 1
        elif c.isupper():
            cnt[1] += 1
        elif c.islower():
            cnt[0] += 1

    for c in cnt:
        print(c, end=' ')
    print()
