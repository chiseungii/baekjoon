S = input()
C = [S[i] for i in range(len(S))]

for i in range(int(input())):
    A, B = map(int, input().split())
    C[A], C[B] = C[B], C[A]

for ci in C:
    print(ci, end='')
print()
