n = int(input())

students = []
friends = []
for i in range(n):
    students.append(list(map(int, input().split())))
    friends.append([False] * n)

for i in range(n):
    for j in range(5):
        for k in range(i + 1, n):
            if students[i][j] == students[k][j]:
                friends[i][k] = friends[k][i] = True

max_cnt = -1; master = 0
for i in range(n):
    cnt = 0
    for j in range(n):
        if friends[i][j]: cnt += 1

    if cnt > max_cnt:
        max_cnt = cnt
        master = i + 1

print(master)
