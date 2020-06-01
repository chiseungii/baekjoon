N, B = input().split()
B = int(B)

result = 0; ten = 1
for i in range(len(N) - 1, -1, -1):
    if N[i] >= 'A':
        result += ten * (ord(N[i]) - ord('A') + 10)
    else:
        result += ten * (ord(N[i]) - ord('0'))

    ten *= B

print(result)
