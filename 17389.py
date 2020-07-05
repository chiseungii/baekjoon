N = int(input())
S = input()

bonus = 0; score = 0
for i in range(len(S)):
    if S[i] == 'O':
        score += i + 1
        score += bonus
        bonus += 1
    else: bonus = 0

print(score)
