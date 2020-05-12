stick = sorted(list(map(int, input().split())))
if stick[0] + stick[1] <= stick[2]:
    stick[2] = stick[0] + stick[1] - 1

print(sum(stick))
