N = int(input())

P = int(input())
a = int(input())
Qp = a - P; Qm = a // P
P = a

plus = True
for i in range(N - 2):
    a = int(input())

    if a - P != Qp:
        plus = False

    P = a

if plus: print(P + Qp)
else: print(P * Qm)
