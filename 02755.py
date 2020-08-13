scores = {'A+': 4.3, 'A0': 4.0, 'A-': 3.7, 'B+': 3.3, 'B0': 3.0, 'B-': 2.7, 'C+': 2.3, 'C0': 2.0, 'C-': 1.7,
          'D+': 1.3, 'D0': 1.0, 'D-': 0.7, 'F': 0.0}

sum_score = 0; sum_grade = 0
for i in range(int(input())):
    sub, s, grade = input().split()
    s = int(s)

    sum_score += s
    sum_grade += s * scores[grade]

print("%.2f" % (sum_grade / sum_score + 0.0001))
