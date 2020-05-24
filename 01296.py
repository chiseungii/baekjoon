minsik = input()

love = []
for i in range(int(input())):
    s = input()
    s2 = s + minsik

    L = 0; O = 0; V = 0; E = 0
    for j in range(len(s2)):
        if s2[j] == 'L': L += 1
        elif s2[j] == 'O': O += 1
        elif s2[j] == 'V': V += 1
        elif s2[j] == 'E': E += 1

    success = (L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)
    success %= 100

    love.append([s, success])

love = sorted(love, key=lambda x: (-x[1], x[0]))
print(love[0][0])
