A_cards = list(map(int, input().split()))
B_cards = list(map(int, input().split()))

last_winner = 'D'
A_score = 0; B_score = 0
for i in range(10):
    if A_cards[i] > B_cards[i]:
        A_score += 3
        last_winner = 'A'
    elif B_cards[i] > A_cards[i]:
        B_score += 3
        last_winner = 'B'
    else:
        A_score += 1
        B_score += 1
        
print(A_score, B_score, sep=' ')
if A_score > B_score:
    print('A')
elif B_score > A_score:
    print('B')
else:
    print(last_winner)
