def isCree(s):
    dis = len(s) // 2

    a = 0
    for i in range(dis):
        a += int(s[i])

    b = 0
    for i in range(dis, len(s)):
        b += int(s[i])

    if a == b: return True
    else: return False

s = input()

l = len(s)
if l % 2: l -= 1
while 1:
    found = False
    for i in range(len(s) - l + 1):
        if isCree(s[i:i+l]):
            print(l)
            found = True
            break

    if found: break

    l -= 2
