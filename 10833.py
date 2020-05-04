rest = 0
for i in range(int(input())):
    student, apple = map(int, input().split())
    rest += (apple % student)

print(rest)
