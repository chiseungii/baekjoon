for i in range(int(input())):
    s = input()

    sum = 0
    for j in range(len(s)):
        if s[j].isalpha():
            sum += ord(s[j]) - ord('A') + 1

    if sum == 100:
        print("PERFECT LIFE")
    else:
        print(sum)
