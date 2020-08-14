sentence = input()

result = ""
no_copy = False
for i in range(len(sentence)):
    if no_copy:
        if sentence[i] == 'p': continue
        else: no_copy = False
    else:
        if sentence[i] == 'a' or sentence[i] == 'e' or sentence[i] == 'i' \
            or sentence[i] == 'o' or sentence[i] == 'u':
            result += sentence[i]
            no_copy = True
        else: result += sentence[i]

print(result)
