N = int(input())
room = []
for i in range(N):
    room.append(input())

garo = 0
for i in range(N):
    cnt = 0
    for j in range(N):
        if room[i][j] == '.': cnt += 1
        else:
            if cnt >= 2: garo += 1
            cnt = 0

    if cnt >= 2: garo += 1

sero = 0
for i in range(N):
    cnt = 0
    for j in range(N):
        if room[j][i] == '.': cnt += 1
        else:
            if cnt >= 2: sero += 1
            cnt = 0

    if cnt >= 2: sero += 1

print(garo, sero)
