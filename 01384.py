group = 1
while 1:
    n = int(input())
    if not n: break

    names = []; messages = []
    for i in range(n):
        tmp = list(input().split())
        names.append(tmp[0])

        message = []
        for j in range(1, n):
            if(tmp[j] == 'N'):
                message.append(j)
        messages.append(message)

    print("Group %d" % group)
    group += 1

    isNeg = False
    for i in range(n):
        if len(messages[i]):
            for j in range(len(messages[i])):
                index = i - messages[i][j]
                if index < 0: index += n
                print(f"{names[index]} was nasty about {names[i]}")
                isNeg = True

    if not isNeg: print("Nobody was nasty")
    print()
