N = int(input())
S = input()

# small, big, special, digit
check = [False] * 4
for i in range(len(S)):
    if S[i].isdigit(): check[3] = True
    elif S[i].isalpha():
        if S[i].isupper(): check[1] = True
        else: check[0] = True
    else: check[2] = True

print(max(6 - N, check.count(False)))
