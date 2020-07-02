M = 1234567891
R = 31

L = int(input())
s = input()

hash = 0; r = 1
for i in range(len(s)):
    a = ord(s[i]) - ord('a') + 1
    hash += a * r % M

    r *= R
    r %= M

print(hash % M)
