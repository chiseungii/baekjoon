answer = [1, 2, 3, 4, 5, 1, 2, 3, 4, 5]
for i in range(int(input())):
    a = list(map(int, input().split()))
    if a == answer: print(i + 1)
