n = int(input())

distances = list(map(int, input().split()))
distances = sorted(distances)

print(sum(distances[:len(distances)-1]))
