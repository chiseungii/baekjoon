for i in range(int(input())):
    message = input()
    secret = input()

    result = ""
    for j in range(len(message)):
        if message[j].isalpha():
            result += secret[ord(message[j]) - ord('A')]
        else: result += message[j]

    print(result)
