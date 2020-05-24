N = int(input())
files = list(map(int, input().split()))
cluster = int(input())

cnt = 0
for file in files:
    if file % cluster:
        cnt += file // cluster + 1
    else:
        cnt += file // cluster

print(cnt * cluster)
