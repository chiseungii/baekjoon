T = int(input())

nine = [0 for i in range(5)]
base = 6561; index = 4
while T > 0:
    if T >= base:
        nine[index] = T // base
        T %= base

    base //= 9
    index -= 1

index = 4
while not nine[index]: index -= 1
for i in range(index, -1, -1):
    print(nine[i], end='')
print()
