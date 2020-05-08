for i in range(int(input())):
    grade = 0; score = 0
    for j in range(int(input())):
        C, G = input().split()
        C = int(C); G = float(G)

        grade += C
        score += (C * G)

    print("%d %.1f" % (grade, score / grade))
