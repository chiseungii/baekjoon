for i in range(int(input())):
    words = input().split()
    print("Case #%d:" % (i + 1), end=' ')
    for j in range(len(words) - 1, -1, -1):
        print(words[j], end=' ')
    print()
