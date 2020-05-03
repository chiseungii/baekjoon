TRACK = 0; FIELD = 1
seven = [TRACK, FIELD, FIELD, TRACK, FIELD, FIELD, TRACK]
A = [9.23074, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193]
B = [26.7, 75, 1.5, 42.5, 210, 3.8, 254]
C = [1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88]

for i in range(int(input())):
    P = list(map(int, input().split()))

    score = 0
    for j in range(7):
        if seven[j] == TRACK:
            score += int(A[j] * pow(B[j] - P[j], C[j]))
        else:
            score += int(A[j] * pow(P[j] - B[j], C[j]))

    print(score)
