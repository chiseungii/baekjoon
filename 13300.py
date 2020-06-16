N, K = map(int, input().split())
students = [[0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0]]

for i in range(N):
    S, Y = map(int, input().split())
    students[S][Y - 1] += 1

cnt = 0
for i in range(6):
    if students[0][i] % K:
        cnt += students[0][i] // K + 1
    elif students[0][i] != 0:
        cnt += students[0][i] // K

    if students[1][i] % K:
        cnt += students[1][i] // K + 1
    elif students[1][i] != 0:
        cnt += students[1][i] // K

print(cnt)
