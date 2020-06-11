for i in range(int(input())):
    s = input()

    score = 0; cnt = 0
    for i in range(len(s)):
        if s[i] == 'O':
            cnt += 1
            score += cnt
        else:
            cnt = 0

    print(score)
