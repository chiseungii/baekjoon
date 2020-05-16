input()
a = list(map(int, input().split()))

milk = 0; cnt = 0
for i in a:
    if i == milk:
        cnt += 1
        milk = (milk + 1) % 3

print(cnt)
