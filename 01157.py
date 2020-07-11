cnt = [0] * 26

s = input()
for i in range(len(s)):
    if s[i].isupper(): cnt[ord(s[i]) - ord('A')] += 1
    else: cnt[ord(s[i]) - ord('a')] += 1

only_one = True
max_index = 0; max_cnt = cnt[0]
for i in range(1, 26):
    if cnt[i] == max_cnt and cnt[i]:
        only_one = False
    elif cnt[i] > max_cnt:
        max_index = i
        max_cnt = cnt[i]
        only_one = True

if max_cnt == 0:
    only_one = False

if not only_one: print("?")
else: print(chr(max_index + ord('A')))
