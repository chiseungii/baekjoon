import sys

s = sys.stdin.read()
alpha = [0 for i in range(26)]
for i in range(len(s)):
    if s[i].islower():
        alpha[ord(s[i]) - 97] += 1

max_cnt = max(alpha)
for i in range(len(alpha)):
    if alpha[i] == max_cnt:
        print(chr(i + 97), end='')
print()
