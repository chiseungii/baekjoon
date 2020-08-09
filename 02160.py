def different(pic1, pic2):
    cnt = 0
    for i in range(35):
        if pic1[i] != pic2[i]:
            cnt += 1

    return cnt

N = int(input())
pics = []
for i in range(N):
    s = ""
    for j in range(5):
        s += input()
    pics.append(s)

p1 = p2 = 0; min = 36
for i in range(N - 1):
    for j in range(i + 1, N):
        dif = different(pics[i], pics[j])
        if dif < min:
            p1 = i; p2 = j
            min = dif

print(p1 + 1, p2 + 1)
