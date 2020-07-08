s = input()

left = 0
for i in range(len(s) // 2):
    left += int(s[i])

right = 0
for i in range(len(s) // 2, len(s)):
    right += int(s[i])

if left == right: print("LUCKY")
else: print("READY")
