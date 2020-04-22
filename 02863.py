A, B = map(int, input().split())
C, D = map(int, input().split())
max = A / C + B / D

max_rot = 0
for i in range(3):
    tmp = A
    A = C; C = D; D = B; B = tmp
    tmp = A / C + B / D
    if tmp > max:
        max = tmp
        max_rot = i + 1

print(max_rot)
