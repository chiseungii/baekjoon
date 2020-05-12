EMPTY = 0; SMALL = 1; BIG = 2
cup = [SMALL, EMPTY, EMPTY, BIG]
s = input()

for i in range(len(s)):
    if s[i] == 'A':
        cup[0], cup[1] = cup[1], cup[0]
    elif s[i] == 'B':
        cup[0], cup[2] = cup[2], cup[0]
    elif s[i] == 'C':
        cup[0], cup[3] = cup[3], cup[0]
    elif s[i] == 'D':
        cup[1], cup[2] = cup[2], cup[1]
    elif s[i] == 'E':
        cup[1], cup[3] = cup[3], cup[1]
    else:
        cup[2], cup[3] = cup[3], cup[2]

print(cup.index(SMALL) + 1)
print(cup.index(BIG) + 1)
