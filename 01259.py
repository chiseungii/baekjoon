while 1:
    s = input()
    if s == '0': break

    isPal = True
    for i in range((len(s) - 1) // 2 + 1):
        if s[i] != s[-i-1]:
            isPal = False
            break

    if isPal: print("yes")
    else: print("no")
