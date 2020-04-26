for a in range(6, 101):
    for b in range(2, a):
        for c in range(b + 1, a):
            for d in range(c + 1, a):
                if a * a * a == b * b * b + c * c * c + d * d * d:
                    print(f"Cube = {a}, Triple = ({b},{c},{d})")
