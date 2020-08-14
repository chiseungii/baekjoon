R, C = map(int, input().split())
card = []
for i in range(R):
    card.append(input())

for i in range(R):
    for j in range(C-1, -1, -1):
        card[i] += card[i][j]

for i in range(R-1, -1, -1):
    card.append(card[i])

A, B = map(int, input().split())
for i in range(2*R):
    for j in range(2*C):
        if i == A - 1 and j == B - 1:
            if card[i][j] == '.': print('#', end='')
            else: print('.', end='')
        else: print(card[i][j], end='')
    print()
