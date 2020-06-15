import sys

for i in range(int(sys.stdin.readline())):
    nums = sorted(list(map(int, sys.stdin.readline().split())))
    print((nums[0] + nums[1])**2 + nums[2]**2)
