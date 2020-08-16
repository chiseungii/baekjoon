for i in range(int(input())):
    scores = list(map(int, input().split()))
    N = scores[0]
    scores = scores[1:]

    avg_score = sum(scores) / N
    cnt = 0
    for score in scores:
        if score > avg_score: cnt += 1

    print("%.3f" % (cnt / N * 100), end='')
    print('%')
