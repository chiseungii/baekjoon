N = int(input())

five = N // 5
rest = N - five * 5
complete = False
while five:
    rest = N - five * 5
    if rest % 3 == 0:
        print(five + rest // 3)
        complete = True
        break

    five -= 1

if not complete:
    if N % 3 == 0:
        print(N // 3)
    else: print(-1)
