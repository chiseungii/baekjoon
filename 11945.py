N, M = map(int, input().split())
for i in range(N):
    fish = input()
    for j in range(M - 1, -1, -1):
        print(fish[j], end='')
    print()
