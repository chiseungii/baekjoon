words = []
for i in range(6):
    words.append(input())

complete = False
for i in range(6):
    for j in range(6):
        if j == i: continue

        for k in range(6):
            if k == i or k == j: continue

            check = [words[i], words[j], words[k]]
            check.append(f"{words[i][0]}{words[j][0]}{words[k][0]}")
            check.append(f"{words[i][1]}{words[j][1]}{words[k][1]}")
            check.append(f"{words[i][2]}{words[j][2]}{words[k][2]}")
            check = sorted(check)

            if words == check:
                complete = True
                print(words[i], words[j], words[k], sep='\n')

            if complete: break

        if complete: break

    if complete: break

if not complete: print(0)
