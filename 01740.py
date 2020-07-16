N = int(input())

two = []
while N > 0:
    two.append(N % 2)
    N //= 2

result = 0; base = 1
for i in range(len(two)):
    result += base * two[i]
    base *= 3

print(result)
