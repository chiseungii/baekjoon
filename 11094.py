for i in range(int(input())):
    s = input()

    if len(s) < 10: continue
    else:
        if s[:10] != "Simon says":
            continue
        else:
            print(s[10:])
