n = int(input())
s = input()

cnt = 0; i = 0
while i < len(s) - 3:
    if s[i:i+4] == 'pPAp':
        cnt += 1
        i += 4
    else:
        i += 1

print(cnt)
