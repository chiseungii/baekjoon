while 1:
    s = input()
    if s == '#': break

    alpha = [0] * 26
    for i in range(len(s)):
        if s[i].isalpha():
            if s[i].islower():
                alpha[ord(s[i]) - ord('a')] = 1
            elif s[i].isupper():
                alpha[ord(s[i]) - ord('A')] = 1

    print(sum(alpha))
