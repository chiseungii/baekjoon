input()
students = list(map(int, input().split()))

cnt = 0
for i in range(len(students)):
    if students[i] != (i + 1):
        cnt += 1

print(cnt)
