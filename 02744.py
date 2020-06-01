s = input()

res = ""
for i in range(len(s)):
    if s[i].islower():
        res += s[i].upper()
    else:
        res += s[i].lower()

print(res)
