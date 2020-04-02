# 집 주소

while True:
    s = input()
    if s == '0':
        break
        
    res = len(s) + 1
    for i in range(len(s)):
        if s[i] == '1':
            res += 2
        elif s[i] == '0':
            res += 4
        else:
            res += 3
            
    print(res)
