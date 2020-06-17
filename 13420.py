for i in range(int(input())):
    a, op, b, equal, c = input().split()
    a, b, c = int(a), int(b), int(c)

    if op == '+':
        if a + b == c:
            correct = True
        else:
            correct = False
    elif op == '-':
        if a - b == c:
            correct = True
        else:
            correct = False
    elif op == '*':
        if a * b == c:
            correct = True
        else:
            correct = False
    else:
        if a // b == c:
            correct = True
        else:
            correct = False

    if correct:
        print("correct")
    else:
        print("wrong answer")
