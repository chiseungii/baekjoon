while 1:
    s = input()
    if s == '#': break

    quicksum = 0
    for i in range(len(s)):
        if s[i].isalpha():
            quicksum += (i + 1) * (ord(s[i]) - ord('A') + 1)

    print(quicksum)
