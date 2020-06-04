while 1:
    nx, ny, w = input().split()
    nx, ny = int(nx), int(ny)
    w = float(w)

    if not nx and not ny and w == 0.0:
        break

    x = sorted(list(map(float, input().split())))
    complete_x = True
    local = 0.0
    for xi in x:
        if xi - w / 2 > local:
            complete_x = False
        local = xi + w / 2
    if local < 75.0:
        complete_x = False

    y = sorted(list(map(float, input().split())))
    complete_y = True
    local = 0.0
    for yi in y:
        if yi - w / 2 > local:
            complete_y = False
        local = yi + w / 2
    if local < 100.0:
        complete_y = False

    if complete_x and complete_y:
        print("YES")
    else:
        print("NO")
