while True:
    branches = list(map(int, input().split()))
    a = branches[0]
    if a == 0:
        break

    leaf = 1
    for i in range(1, a * 2 + 1, 2):
        leaf *= branches[i]
        leaf -= branches[i + 1]

    print(leaf)
