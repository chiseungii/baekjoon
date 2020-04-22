pibonacchi = [0, 1]

n = int(input())
for i in range(2, n + 1):
    pibonacchi.append(pibonacchi[i - 1] + pibonacchi[i - 2])

print(pibonacchi[n])
