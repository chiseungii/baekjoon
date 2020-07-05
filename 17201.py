N = int(input())
a = input()

connect = True
if a[0] == '1':
    for i in range(0, len(a), 2):
        if a[i] != '1' or a[i + 1] != '2':
            connect = False
            break
else:
    for i in range(0, len(a), 2):
        if a[i] != '2' or a[i + 1] != '1':
            connect = False
            break

if connect: print("Yes")
else: print("No")
