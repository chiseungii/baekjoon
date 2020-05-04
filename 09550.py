for i in range(int(input())):
    N, K = map(int, input().split())

    children = 0
    candy = list(map(int, input().split()))
    for j in candy:
        children += (j // K)

    print(children)
