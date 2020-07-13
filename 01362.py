scenario = 1
while 1:
    o, w = map(int, input().split())
    if not o and not w: break

    dead = False
    while 1:
        c, n = input().split()
        n = int(n)
        if c == '#' and not n: break

        if c == 'E': w -= n
        else: w += n

        if w <= 0: dead = True

    print(scenario, end=' ')
    scenario += 1

    if dead: print("RIP")
    elif w > o//2 and w < o*2: print(":-)")
    else: print(":-(")
