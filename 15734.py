L, R, A = map(int, input().split())

if L > R:
    dis = L - R
    if dis < A:
        R += dis
        A -= dis

        if A % 2: A -= 1
        num = R * 2 + A
    else:
        R += A
        A = 0

        num = R * 2
elif L < R:
    dis = R - L
    if dis < A:
        L += dis
        A -= dis

        if A % 2: A -= 1
        num = L * 2 + A
    else:
        L += A
        A = 0

        num = L * 2
else:
    if A % 2: A -= 1
    num = R * 2 + A

print(num)
