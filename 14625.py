sH, sM = map(int, input().split())
eH, eM = map(int, input().split())
N = int(input())

cnt = 0
while 1:
    if (sH % 10 == N or sH // 10 == N or
        sM % 10 == N or sM // 10 == N):
        cnt += 1

    if sH == eH and sM == eM:
        break

    sM += 1
    if sM == 60:
        sM = 0
        sH += 1

print(cnt)
