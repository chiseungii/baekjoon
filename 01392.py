N, Q = map(int, input().split())

sec = []
for i in range(N):
    for j in range(int(input())):
        sec.append(i + 1)

for i in range(Q):
    print(sec[int(input())])
