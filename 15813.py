N = int(input())
name = input()

score = 0
for i in range(len(name)):
    score += ord(name[i]) - ord('A') + 1

print(score)
