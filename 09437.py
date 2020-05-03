while 1:
    tmp = [*map(int, input().split())]
    if len(tmp) == 1: break
    N, P = tmp[0], tmp[1]

    page = []
    if P > N // 2:
        distance = N - P + 1
    else:
        distance = P

    if distance % 2:
        page.append(distance)
        page.append(distance + 1)
        page.append(N - distance)
        page.append(page[2] + 1)
    else:
        page.append(distance - 1)
        page.append(distance)
        page.append(N - distance + 1)
        page.append(page[2] + 1)

    for i in range(4):
        if page[i] != P:
            print(page[i], end=' ')
    print()
