N = int(input())

sum_score = 0
for i in range(N):
    s = input()

    score = 0
    for j in range(len(s)):
        if s[j] == '0' or s[j] == '6' or s[j] == '9':
            score = score * 10 + 9
        else:
            score = score * 10 + int(s[j])

    if score > 100: score = 100
    sum_score += score

avg_score = sum_score / N
avg_score += 0.5
print(int(avg_score))
