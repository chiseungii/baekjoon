N = int(input())
tmp = pow(5, N)
tmp = str(tmp)

res = "0."
for i in range(N - len(tmp)):
    res += '0'

print(res + tmp)
