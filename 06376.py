print('n e')
print('- -----------')

n = 0; i_pac = 1; e = 1
for i in range(10):
    if n == 0 or n == 1:
        print("%d %d" % (n, e))
    elif n == 2:
        print("%d %.1f" % (n, e))
    else:
        print("%d %.9f" % (n, e))

    n += 1
    i_pac *= n
    e += (1 / i_pac)
