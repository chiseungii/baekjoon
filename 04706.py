import math

while True:
    ta, tb = map(float, input().split())
    if ta == 0 and tb == 0:
        break

    v = math.sqrt(1 - (tb ** 2) / (ta ** 2))
    print('%.3f' % v)
