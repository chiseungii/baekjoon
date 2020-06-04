gandalf = [1, 2, 3, 3, 4, 10]
sauron = [1, 2, 2, 2, 3, 5, 10]

for i in range(int(input())):
    g = list(map(int, input().split()))
    G = 0
    for j in range(6):
        G += g[j] * gandalf[j]

    s = list(map(int, input().split()))
    S = 0
    for j in range(7):
        S += s[j] * sauron[j]

    if G == S:
        print("Battle %d: No victor on this battle field" % (i + 1))
    elif G > S:
        print("Battle %d: Good triumphs over Evil" % (i + 1))
    else:
        print("Battle %d: Evil eradicates all trace of Good" % (i + 1))
