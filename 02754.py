score = [
    [4.3, 4.0, 3.7],
    [3.3, 3.0, 2.7],
    [2.3, 2.0, 1.7],
    [1.3, 1.0, 0.7]
]
grade = input()

if grade == "F":
    print('0.0')
else:
    if grade[0] == 'A':
        i = 0
    elif grade[0] == 'B':
        i = 1
    elif grade[0] == 'C':
        i = 2
    else:
        i = 3
    if grade[1] == '+':
        j = 0
    elif grade[1] == '0':
        j = 1
    else:
        j = 2

    print(score[i][j])
