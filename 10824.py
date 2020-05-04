A, B, C, D = input().split()
A = int(A); C = int(C)

for i in range(len(B)): A *= 10
for i in range(len(D)): C *= 10
B = int(B); D = int(D)
print(A + B + C + D)
