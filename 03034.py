import math

N, W, H = map(int, input().split())

for i in range(N):
    length = int(input())

    if length <= W:
        print("DA")
    elif length <= H:
        print("DA")
    elif length <= math.sqrt(W ** 2 + H ** 2):
        print("DA")
    else:
        print("NE")
