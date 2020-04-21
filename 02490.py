for i in range(3):
    cnt = [0, 0]
    a, b, c, d = map(int, input().split())
    cnt[a] += 1
    cnt[b] += 1
    cnt[c] += 1
    cnt[d] += 1
    
    if cnt[0] == 1:
        print('A')
    elif cnt[0] == 2:
        print('B')
    elif cnt[0] == 3:
        print('C')
    elif cnt[0] == 4:
        print('D')
    else:
        print('E')
