n1, n2, n3 = map(int, input().split())

if (n1 + n2) == n3:
    print(f"{n1}+{n2}={n3}")
elif (n1 - n2) == n3:
    print(f"{n1}-{n2}={n3}")
elif (n1 * n2) == n3:
    print(f"{n1}*{n2}={n3}")
elif (n1 // n2) == n3:
    print(f"{n1}/{n2}={n3}")
elif n1 == (n2 + n3):
    print(f"{n1}={n2}+{n3}")
elif n1 == (n2 - n3):
    print(f"{n1}={n2}-{n3}")
elif n1 == (n2 * n3):
    print(f"{n1}={n2}*{n3}")
else:
    print(f"{n1}={n2}/{n3}")
