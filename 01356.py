N = input()

isRight = False
for i in range(len(N) - 1):
    left = 1
    for j in range(i + 1):
        left *= int(N[j])

    right = 1
    for j in range(i + 1, len(N)):
        right *= int(N[j])

    if left == right:
        isRight = True
        break

if isRight: print("YES")
else: print("NO")
