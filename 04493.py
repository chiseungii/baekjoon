for i in range(int(input())):
    play1 = 0; play2 = 0
    for j in range(int(input())):
        p1, p2 = input().split()

        if p1 == 'R':
            if p2 == 'S':
                play1 += 1
            elif p2 == 'P':
                play2 += 1
        elif p1 == 'S':
            if p2 == 'R':
                play2 += 1
            elif p2 == 'P':
                play1 += 1
        else:
            if p2 == 'S':
                play2 += 1
            elif p2 == 'R':
                play1 += 1

    if play1 == play2:
        print("TIE")
    elif play1 > play2:
        print("Player 1")
    else:
        print("Player 2")
