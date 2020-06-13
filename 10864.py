N, M = map(int, input().split())
friends = [0] * (N + 1)

for i in range(M):
    A, B = map(int, input().split())

    friends[A] += 1
    friends[B] += 1

for friend in friends[1:]:
    print(friend)
