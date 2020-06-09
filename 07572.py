twelve = ['L', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K']
N = int(input())

if N == 3:
    print("L9")
elif N == 2:
    print("K8")
elif N == 1:
    print("J7")
else:
    N -= 3
    N %= 60
    if N == 0: N = 60

    ten = N % 10
    if ten == 0: ten = 10
    ten -= 1

    print(twelve[N % 12], ten, sep='')
