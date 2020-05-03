for i in range(int(input())):
    angle = sorted(list(map(int, input().split())))

    print("Case #%d:" % (i + 1), end=' ')
    if angle[2] >= angle[0] + angle[1]:
        print("invalid!")
    elif angle[0] == angle[1] and angle[0] == angle[2]:
        print("equilateral")
    elif angle[0] == angle[1] or angle[1] == angle[2]:
        print("isosceles")
    else:
        print("scalene")
