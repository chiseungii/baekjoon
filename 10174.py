for i in range(int(input())):
    s = input().upper()

    correct = True
    if len(s) % 2:
        for j in range(len(s) // 2):
            if s[j] != s[len(s) - j - 1]:
                correct = False
    else:
        for j in range(len(s) // 2 + 1):
            if s[j] != s[len(s) - j - 1]:
                correct = False

    if correct: print("Yes")
    else: print("No")
