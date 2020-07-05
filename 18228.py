N = int(input())
ice = list(map(int, input().split()))

index = 0
min_left = 1000000001
while ice[index] != -1:
    if ice[index] < min_left:
        min_left = ice[index]
    index += 1

min_right = 1000000001
index += 1
while index < N:
    if ice[index] < min_right:
        min_right = ice[index]
    index += 1

print(min_left + min_right)
