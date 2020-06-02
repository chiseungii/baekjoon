def reverse(n):
    result = 0
    while n > 0:
        result *= 10
        result += n % 10
        n //= 10

    return result

for i in range(int(input())):
    N = int(input())

    sum = N + reverse(N)
    if sum == reverse(sum):
        print("YES")
    else:
        print("NO")
