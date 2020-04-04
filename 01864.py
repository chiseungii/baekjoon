while True:
    s = input()
    if s == '#':
        break

    res = 0
    pow = 1
    for i in range(len(s) - 1, -1, -1):
        if s[i] == '/':
            a = -1
        elif s[i] == '-':
            a = 0
        elif s[i] == '\\':
            a = 1
        elif s[i] == '(':
            a = 2
        elif s[i] == '@':
            a = 3
        elif s[i] == '?':
            a = 4
        elif s[i] == '>':
            a = 5
        elif s[i] == '&':
            a = 6
        else:
            a = 7
        res += (a * pow)
        pow *= 8

    print(res)
