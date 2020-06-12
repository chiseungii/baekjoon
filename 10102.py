V = int(input())
s = input()

score = 0
for i in range(V):
    if s[i] == 'A': score -= 1
    else: score += 1

if score == 0: print("Tie")
elif score < 0: print("A")
else: print("B")
