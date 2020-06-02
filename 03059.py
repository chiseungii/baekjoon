for i in range(int(input())):
    alpha = [0] * 26
    s = input()

    for i in range(len(s)):
        alpha[ord(s[i]) - ord('A')] = 1

    ascii = 0
    for i in range(26):
        if not alpha[i]:
            ascii += i + ord('A')

    print(ascii)
