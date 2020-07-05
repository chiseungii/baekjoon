N = int(input())
pal = input()
pals = [pal[i] for i in range(len(pal))]

for i in range((N - 1) // 2 + 1):
    right_index = N - i - 1
    if pals[i] == '?' and pals[right_index] == '?':
        pals[i] = pals[right_index] = 'a'
    elif pals[i] == '?':
        pals[i] = pals[right_index]
    else:
        pals[right_index] = pals[i]

for p in pals:
    print(p, end='')
print()
