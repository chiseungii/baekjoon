while 1:
    letter = list(input().split())
    if letter[0] == "*": break

    isTautogram = True
    alpha = letter[0][0].upper()
    for l in letter[1:]:
        if l[0].upper() != alpha:
            isTautogram = False

    if isTautogram: print("Y")
    else: print("N")
