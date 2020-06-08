from math import sqrt

n = 1
while 1:
    s = input()
    if s == '0': break
    r, w, l = map(int, s.split())

    print("Pizza %d" % n, end=' ')
    line = sqrt(w ** 2 + l ** 2)
    if line <= r * 2:
        print("fits on the table.")
    else:
        print("does not fit on the table.")

    n += 1
