A, B, C, D = map(int, input().split())
P, M, N = map(int, input().split())
late = max(P, M, N)

dog1 = [0]; dog2 = [0]
i = 1
while i <= late:
    for j in range(A):
        dog1.append(1)
    for j in range(B):
        dog1.append(0)

    i += (A + B)
i = 1
while i <= late:
    for j in range(C):
        dog2.append(1)
    for j in range(D):
        dog2.append(0)

    i += (C + D)

print(dog1[P] + dog2[P])
print(dog1[M] + dog2[M])
print(dog1[N] + dog2[N])
