N = int(input())
files = []
for i in range(N):
    files.append(input())

lenght = len(files[0])
pattern = ""
for i in range(lenght):
    same = True
    cmp = files[0][i]
    for j in range(1, len(files)):
        if files[j][i] != cmp:
            same = False
            break

    if same: pattern += cmp
    else: pattern += "?"

print(pattern)
