for i in range(int(input())):
    sum = 0; min = 101
    for j in map(int, input().split()):
        if j % 2 == 0:
            sum += j
            if j < min:
                min = j

    print(sum, min, sep=' ')
