for i in range(int(input())):
    s = input()

    if len(s) == 1:
        print(s, s, sep='\n')
    else:
        if len(s) % 2:
            answer1 = s[::2]
            answer1 += s[1::2]
    
            answer2 = s[1::2]
            answer2 += s[::2]
        else:
            answer1 = s[::2]
            answer2 = s[1::2]
    
        print(answer1, answer2, sep='\n')
