from math import sqrt

i = 1
while(i):
    a, b, c = map(float, input().split())
    if not a and not b and not c:
        break
        
    print(f"Triangle #{i}")
    if c == -1:
        c = sqrt(a * a + b * b)
        print("c = %.3f" % c)
    else:
        if a == -1:
            a = c * c - b * b
            if a <= 0:
                print("Impossible.")
            else:
                print("a = %.3f" % sqrt(a))
        else:
            b = c * c - a * a
            if b <= 0:
                print("Impossible.")
            else:
                print("b = %.3f" % sqrt(b))
                
    print()
    i += 1
