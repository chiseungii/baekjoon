N, M = map(int, input().split())

students = [0]
for i in range(N):
    students.append(int(input()))

for i in range(1, M + 1):
    for j in range(2, N + 1):
        if students[j - 1] % i > students[j] % i:
            students[j - 1], students[j] = students[j], students[j - 1]

for student in students[1:]:
    print(student)
