while 1:
    nums = [True] * 11

    lie = False; exit = False
    while 1:
        n = int(input())
        if not n:
            exit = True
            break

        answer = input()
        if answer == "right on":
            if not nums[n]: lie = True
            break
        elif answer == "too high":
            for i in range(n, 11):
                nums[i] = False
        else:
            for i in range(1, n + 1):
                nums[i] = False

    if exit: break

    if lie: print("Stan is dishonest")
    else: print("Stan may be honest")
