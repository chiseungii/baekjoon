for i in range(int(input())):
    H, W, N = map(int, input().split())

    room = (N - 1) // H + 1
    stair = N % H
    if not stair: stair = H
    print(stair * 100 + room)
