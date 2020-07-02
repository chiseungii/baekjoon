N, M = map(int, input().split())
S = input()

for i in range(M):
    post = input()

    index = 0
    for j in range(len(post)):
        if post[j] == S[index]:
            index += 1
            if index >= len(S):
                break

    if index >= len(S):
        print("true")
    else:
        print("false")
