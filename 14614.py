A, B, C = map(int, input().split())

last = C % 10
if last % 2: A ^= B

print(A)
