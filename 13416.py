for i in range(int(input())):
    cost = 0
    for j in range(int(input())):
        A, B, C = map(int, input().split())

        if max(A, B, C) > 0:
            cost += max(A, B, C)

    print(cost)
