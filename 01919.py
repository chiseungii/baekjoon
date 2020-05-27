alpha1 = [0] * 26
alpha2 = [0] * 26

s1 = input()
for i in range(len(s1)):
    alpha1[ord(s1[i]) - ord('a')] += 1

s2 = input()
for i in range(len(s2)):
    alpha2[ord(s2[i]) - ord('a')] += 1

cnt = 0
for i in range(26):
    if alpha1[i] != alpha2[i]:
        cnt += abs(alpha1[i] - alpha2[i])

print(cnt)
