for i in range(int(input())):
    yonsei = 0; korea = 0
    for j in range(9):
        Y, K = map(int, input().split())
        yonsei += Y; korea += K

    if yonsei > korea: print("Yonsei")
    elif yonsei < korea: print("Korea")
    else: print("Draw")
