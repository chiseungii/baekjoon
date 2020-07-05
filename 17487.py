right_hands = ['U', 'u', 'I', 'i', 'O', 'o', 'P', 'p', 'H', 'h', 'J', 'j', 'K', 'k', 'L', 'l', 'N', 'n', 'M', 'm']

S = input()
left = right = shift = space = 0
for i in range(len(S)):
    if S[i] == ' ': space += 1
    else:
        if S[i].isupper(): shift += 1
        if S[i] in right_hands:
            right += 1
        else: left += 1

for i in range(shift):
    if left <= right: left += 1
    else: right += 1
for i in range(space):
    if left <= right: left += 1
    else: right += 1

print(left, right)
