for i in range(int(input())):
    score = list(map(int, input().split()))
    score = sorted(score)

    if score[3] - score[1] >= 4:
        print("KIN")
    else:
        print(sum(score[1:4]))
