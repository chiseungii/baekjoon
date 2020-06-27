circles = ["PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"]
candidates = [0] * 9

N = int(input())

for i in range(9):
    a = list(map(int, input().split()))
    candidates[i] = max(a)

max_index = candidates.index(max(candidates))
print(circles[max_index])
