for i in range(int(input())):
    d = int(input())

    time = 1
    while time ** 2 + time <= d:
        time += 1
    print(time - 1)
