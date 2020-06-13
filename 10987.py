vowel = ['a', 'e', 'i', 'o', 'u']
s = input()

cnt = 0
for i in range(len(s)):
    if s[i] in vowel:
        cnt += 1

print(cnt)
