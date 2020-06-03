for i in range(int(input())):
    s1 = input()
    s2 = input()

    X = 0
    for j in range(len(s1)):
        if s1[j] != s2[j]:
            X += 1

    print("Hamming distance is %d." % X)
