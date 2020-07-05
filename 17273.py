N, M = map(int, input().split())
card = list(map(int, input().split()))

turn = 0
for i in range(M):
    K = int(input())

    if K >= card[turn]:
        turn = ~turn

print(card[turn])
