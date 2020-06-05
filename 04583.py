while 1:
    s = input()
    if s == '#': break

    valid = True; res = ""
    for i in range(len(s)):
        if s[i] == 'b': res += 'd'
        elif s[i] == 'd': res += 'b'
        elif s[i] == 'p': res += 'q'
        elif s[i] == 'q': res += 'p'
        elif s[i] == 'i' or s[i] == 'o' or s[i] == 'v' or s[i] == 'w' or s[i] == 'x':
            res += s[i]
        else:
            valid = False
            res += s[i]

    if not valid:
        print("INVALID")
    else:
        for i in range(len(res) - 1, -1, -1):
            print(res[i], end='')
        print()
