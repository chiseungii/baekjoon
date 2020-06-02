for i in range(int(input())):
    k = int(input())
    n = int(input())

    room = [i for i in range(n + 1)]
    for i in range(1, k + 1):
        for j in range(1, n + 1):
            room[j] = room[j - 1] + room[j]

    print(room[n])
