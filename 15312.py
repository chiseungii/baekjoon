strCnt = [3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]

s1 = input()
s2 = input()

love = []
for i in range(len(s1)):
    love.append(strCnt[ord(s1[i]) - ord('A')])
    love.append(strCnt[ord(s2[i]) - ord('A')])

while len(love) > 2:
    for i in range(len(love) - 1):
        love[i] = (love[i] + love[i + 1]) % 10
    love = love[:len(love)-1]

print(love[0], love[1], sep='')
