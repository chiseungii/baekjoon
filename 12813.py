A = input()
B = input()

r1 = r2 = r3 = r4 = r5 = ""
for i in range(len(A)):
    a = int(A[i])
    b = int(B[i])

    if a & b: r1 += '1'
    else: r1 += '0'

    if a | b: r2 += '1'
    else: r2 += '0'

    if a ^ b: r3 += '1'
    else: r3 += '0'

    if not a: r4 += '1'
    else: r4 += '0'

    if not b: r5 += '1'
    else: r5 += '0'

print(r1, r2, r3, r4, r5, sep='\n')
