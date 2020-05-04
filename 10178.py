for i in range(int(input())):
    candy, bro = map(int, input().split())
    print("You get %d piece(s) and your dad gets %d piece(s)." % (candy // bro, candy % bro))
