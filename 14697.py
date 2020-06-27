A, B, C, N = map(int, input().split())

for i in range(N + 1):
    room1 = A * i
    for j in range(N + 1):
        room2 = B * j
        for k in range(N + 1):
            room3 = C * k

            if room1 + room2 + room3 == N:
                print(1)
                exit()

print(0)
