s = input()

isPal = True
for i in range(len(s)):
    if s[i] != s[len(s) - 1 - i]:
        isPal = False

if isPal: print("true")
else: print("false")
