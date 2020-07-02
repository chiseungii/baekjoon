n, var = input().split()

words = []
if n == '2':
    words = list(var.split('_'))
else:
    index = 0
    for i in range(1, len(var)):
        if var[i].isupper():
            words.append(var[index:i])
            index = i
    words.append(var[index:])

# print camel
print(words[0].lower(), end='')
for word in words[1:]:
    print(word.title(), end='')
print()

# print snake
for word in words[:len(words)-1]:
    print(word.lower(), end='_')
print(words[-1].lower())

# print pascal
for word in words:
    print(word.title(), end='')
print()
