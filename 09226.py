while 1:
    s = input()
    if s == '#': break

    change = False
    for i in range(len(s)):
        if s[0] == 'a' or s[0] == 'e' or s[0] == 'i' or s[0] == 'o' or s[0] == 'u':
            change = True
            s += "ay"
            break
        else:
            s = s[1:] + s[0]

    if not change: print(s, "ay", sep='')
    else: print(s)
