K = int(input())
D1, D2 = map(int, input().split())

a = (D1 - D2) / 2
h2 = K * K - a * a

print("%.6f" % h2)
