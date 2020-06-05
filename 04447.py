for i in range(int(input())):
    s = input()

    g = 0; b = 0
    for j in range(len(s)):
        if s[j] == 'g' or s[j] == 'G':
            g += 1
        elif s[j] == 'b' or s[j] == 'B':
            b += 1

    if g == b:
        print(s, "is NEUTRAL")
    elif g > b:
        print(s, "is GOOD")
    else:
        print(s, "is A BADDY")
