words = list(input().split())
excepts = ["i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"]

print(words[0][0].upper(), end='')
for i in range(1, len(words)):
    if words[i] in excepts:
        continue
    else: print(words[i][0].upper(), end='')
print()
