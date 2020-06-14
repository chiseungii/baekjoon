for i in range(int(input())):
    alpha1 = [0] * 26
    alpha2 = [0] * 26

    s1, s2 = input().split()

    if len(s1) != len(s2):
        print("Impossible")
        continue
    else:
        for j in range(len(s1)):
            alpha1[ord(s1[j]) - ord('a')] += 1
            alpha2[ord(s2[j]) - ord('a')] += 1

    if alpha1 == alpha2:
        print("Possible")
    else:
        print("Impossible")
