N = int(input())

before = N
cycle = 0
while 1:
    cycle += 1

    tmp = before % 10 + before // 10
    after = before % 10 * 10 + tmp % 10

    if after == N: break
    before = after

print(cycle)
