dir = 0; turn = 1
for i in range(int(input())):
    a, b, c = map(int, input().split())

    turn = turn // a * b
    if c: dir = not dir

print(int(dir), turn)
