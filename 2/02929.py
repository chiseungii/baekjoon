code = input()

index = 0; NOP = 0
for i in range(len(code)):
    if code[i].islower(): index += 1
    else:
        if index % 4 == 0: index += 1
        else:
            while index % 4:
                index += 1
                NOP += 1
            index += 1

print(NOP)
