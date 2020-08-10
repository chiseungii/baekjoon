for i in range(int(input())):
    s = input()

    cnt = {}
    cnt["TTT"] = 0
    cnt["TTH"] = 0
    cnt["THT"] = 0
    cnt["THH"] = 0
    cnt["HTT"] = 0
    cnt["HTH"] = 0
    cnt["HHT"] = 0
    cnt["HHH"] = 0

    for j in range(len(s) - 2):
        tmp = s[j:j+3]
        cnt[tmp] += 1

    for key, item in cnt.items():
        print(item, end=' ')
    print()
