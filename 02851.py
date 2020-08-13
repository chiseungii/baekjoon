import sys

mushrooms = []
for i in range(10):
    mushrooms.append(int(sys.stdin.readline()))

score = 0
for mushroom in mushrooms:
    score += mushroom

    if score >= 100:
        a = score - mushroom
        b = score
        break
        
if score < 100: a = b = score

if a == 100 or b == 100: print(100)
elif (b - 100) == (100 - a): print(b)
else:
    if (b - 100) > (100 - a): print(a)
    else: print(b)
