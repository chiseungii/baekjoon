s = input()
key = input()

index_key = 0
result = ""
for i in range(len(s)):
    if s[i] == ' ':
        result += ' '
    else:
        if s[i] > key[index_key]:
            lock = ord(s[i]) - ord(key[index_key])
            lock += ord('a') - 1
            lock = chr(lock)
        elif s[i] == key[index_key]:
            lock = 'z'
        else:
            lock = ord('z') - (ord(key[index_key]) - ord(s[i]))
            lock = chr(lock)
        result += lock

    index_key += 1
    index_key %= len(key)

print(result)
