def team(n, m, k):
    rest = 0

    if n % 2:
        rest += 1
        n -= 1
    if n > m * 2:
        rest += (n - m * 2)
        n -= (n - m * 2)
    if m > n // 2:
        rest += (m - n // 2)
        m -= (m - n // 2)

    k -= rest
    while k > 0:
        n -= 2
        m -= 1
        k -= 3

    return m

N, M, K = map(int, input().split())
print(team(N, M, K))
