s = input()
alpha = [-1] * 26

for i in range(len(s)):
    if alpha[ord(s[i]) - ord('a')] == -1:
        alpha[ord(s[i]) - ord('a')] = i

for a in alpha:
    print(a, end=' ')
print()
