for i in range(int(input())):
    min_cost_per_weight = 100001.0
    min_cost = 100001
    for j in range(int(input())):
        W, C = map(int, input().split())

        cost = C / W
        if min_cost_per_weight > cost:
            min_cost_per_weight = cost
            min_cost = C
        elif min_cost_per_weight == cost:
            if min_cost > C:
                min_cost = C

    print(min_cost)
