while True:
    a1, a2, a3 = map(int, input().split())
    if not a1 and not a2 and not a3:
        break

    b1 = a2 - a1; b2 = a3 - a2
    if b1 == b2:
        print(f"AP {a3 + b1}")
        continue

    d1 = a2 // a1
    d2 = a3 // a2
    if d1 == d2:
        print(f"GP {a3 * d1}")
