for i in range(int(input())):
    n, m = map(int, input().split())
    print("Scenario #%d:" % (i + 1))
    print((m + n) * (m - n + 1) // 2)
    print()
