N, a, b = map(int, input().split())

seat = []
for i in range(N):
    students = list(map(int, input().split()))
    seat.append(students)

angry = False
jinseo = seat[a - 1][b - 1]
for i in range(N):
    if seat[a - 1][i] > jinseo:
        angry = True
    if seat[i][b - 1] > jinseo:
        angry = True

if angry: print("ANGRY")
else: print("HAPPY")
