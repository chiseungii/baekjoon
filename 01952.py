M, N = map(int, input().split())
snail = [[0] * (N + 2)] + [[0] + [1] * N + [0] for i in range(M)] + [[0] * (N + 2)]

x = 1; move_x = [1, 0, -1, 0]
y = 1; move_y = [0, 1, 0, -1]
dir = 0; cnt = 0; s = M * N
while True:
    if snail[y][x]:
        snail[y][x] = 0
        s -= 1
        if s == 0:
            break

        x += move_x[dir]
        y += move_y[dir]
    else:
        x -= move_x[dir]
        y -= move_y[dir]
        cnt += 1
        dir = (dir + 1) % 4
        x += move_x[dir]
        y += move_y[dir]

print(cnt)
