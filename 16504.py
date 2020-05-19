result = 0
for i in range(int(input())):
    a = list(map(int, input().split()))
    result += sum(a)

print(result)
