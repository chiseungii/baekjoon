s = input()

arrow = time = 0
for i in range(len(s)):
    dis = abs(ord(s[i]) - ord('A') - arrow)

    if dis > 13: time += 26 - dis
    else: time += dis

    arrow = ord(s[i]) - ord('A')

print(time)
