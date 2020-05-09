for i in range(int(input())):
    A, B = map(int, input().split())

    if A ** 2 % B ** 2:
        print(A ** 2 // B ** 2 + 1)
    else:
        print(A ** 2 // B ** 2)
