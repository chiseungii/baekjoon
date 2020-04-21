N = int(input())

OX = list(map(int, input().split()))
correct = 0; score = 0
for i in range(len(OX)):
    if OX[i]:
        correct += 1
        score += correct
    else:
        correct = 0
        
print(score)
