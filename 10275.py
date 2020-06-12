for i in range(int(input())):
    n, a, b = map(int, input().split())
    gold = 2 ** n

    day = 0
    a_gold = 0; b_gold = gold
    while 1:
        day += 1
        half = b_gold // 2
        if a_gold + half <= a:
            a_gold += half
        b_gold //= 2

        if a_gold == a: break

    print(day)
