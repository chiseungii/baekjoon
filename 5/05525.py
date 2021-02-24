def PN(s, n):
    cnt = 0
    num = 0

    i = 0
    while(True):
        if i >= len(s) - 2: break

        if s[i] == 'I' and s[i+1] == 'O' and s[i+2] == 'I':
            num += 1

            if num == n:
                cnt += 1
                num -= 1

            i += 1
        else: num = 0

        i += 1

    return cnt

if __name__ == "__main__":
    N = int(input())
    M = int(input())
    S = input()

    print(PN(S, N))
