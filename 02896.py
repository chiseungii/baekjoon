A, B, C = map(int, input().split())
I, J, K = map(int, input().split())

r1 = A / I
r2 = B / J
r3 = C / K

if r1 == r2 and r1 == r3: print("0 0 0")
else:
    min_r = min(r1, r2, r3)
    print("%.4f %.4f %.4f" % (A-min_r*I, B-min_r*J, C-min_r*K))
