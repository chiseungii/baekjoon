for i in range(int(input())):
    command = input()

    if len(command) != 7: print(0)
    else:
        if command[0] != command[1] or command[0] != command[4]:
            print(0)
        elif command[2] != command[3] or command[2] != command[5] or command[2] != command[6]:
            print(0)
        elif command[0] == command[2]:
            print(0)
        else:
            print(1)
