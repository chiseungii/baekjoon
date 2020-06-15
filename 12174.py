def googleToInt(s):
    result = 0
    for i in range(len(s)):
        if s[i] == 'O':
            result *= 10
        else:
            result = result * 10 + 1

    return result

def twoToTen(n):
    base = 1
    result = 0
    while n > 0:
        result += n % 10 * base
        n //= 10
        base *= 2

    return chr(result)

for i in range(int(input())):
    B = int(input())
    s = input()

    print("Case #%d:" % (i + 1), end=' ')
    for j in range(B):
        tmp = googleToInt(s[j*8:j*8+8])
        print(twoToTen(tmp), end='')

    print()
