horse = 0; white = 1
for i in range(8):
    c = input()
    for cell in c:
        if white and cell == 'F':
            horse += 1

        white = not white
    white = not white

print(horse)
