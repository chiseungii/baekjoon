news = []
R, C, ZR, ZC = map(int, input().split())
for i in range(R):
    news.append(input())

for i in range(R):
    for ii in range(ZR):
        for j in range(C):
            for jj in range(ZC):
                print(news[i][j], end='')
        print()
