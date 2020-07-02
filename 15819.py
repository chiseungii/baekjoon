N, I = map(int, input().split())

handle = []
for i in range(N):
    handle.append(input())
handle = sorted(handle)

print(handle[I - 1])
