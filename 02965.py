A, B, C = map(int, input().split())
term1 = B - A; term2 = C - B
print(max(term1, term2) - 1)
