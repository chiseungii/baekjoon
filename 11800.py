ones = ["Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"]
twice = ["Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"]

for i in range(int(input())):
    a, b = map(int, input().split())
    if b > a: a, b = b, a

    print("Case %d:" % (i + 1), end=' ')
    if a == b: print(twice[a - 1])
    else:
        if a == 6 and b == 5:
            print("Sheesh Beesh")
        else:
            print(ones[a - 1], ones[b - 1])
