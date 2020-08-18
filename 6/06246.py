N, Q = map(int, input().split())
slot = [0] * N

for i in range(Q):
    L, I = map(int, input().split())

    for j in range(L-1, N, I):
        slot[j] = 1

print(slot.count(0))
