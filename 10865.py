import sys

N, M = map(int, sys.stdin.readline().split())
friends = [0] * (N + 1)

for i in range(M):
    A, B = map(int, sys.stdin.readline().split())

    friends[A] += 1
    friends[B] += 1

for friend in friends[1:]:
    print(friend)
