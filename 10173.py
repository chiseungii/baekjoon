def found_nemo(s):
    nemo = ["EMO", "EMo", "EmO", "eMO", "Emo", "eMo", "emO", "emo"]
    for i in range(len(s) - 3):
        if s[i] == 'N' or s[i] == 'n':
            if s[i+1:i+4] in nemo:
                return True

    return False

while 1:
    s = input()
    if s == 'EOI': break

    if found_nemo(s):
        print("Found")
    else:
        print("Missing")
