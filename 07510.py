for i in range(int(input())):
    angle = list(map(int, input().split()))
    angle = sorted(angle)
    
    print("Scenario #%d:" % (i + 1))
    if angle[2] ** 2 == angle[0] ** 2 + angle[1] ** 2:
        print("yes\n")
    else:
        print("no\n")
