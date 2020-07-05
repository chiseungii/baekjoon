T = input()
key = ord(T[0]) ^ ord('C')

S = ""
for i in range(len(T)):
    S += chr(ord(T[i]) ^ key)

print(S)
