video = [];
result = "";

def isFull(start_i, start_j, size):
    global video

    first = video[start_i][start_j]

    for i in range(start_i, start_i+size):
        for j in range(start_j, start_j+size):
            if video[i][j] != first: return False

    return True

def DNC(start_i, start_j, size):
    global video, result

    if size == 1 or isFull(start_i, start_j, size):
        result += video[start_i][start_j]
        return

    afterSize = size // 2
    result += "("

    DNC(start_i, start_j, afterSize)
    DNC(start_i, start_j+afterSize, afterSize)
    DNC(start_i+afterSize, start_j, afterSize)
    DNC(start_i+afterSize, start_j+afterSize, afterSize)

    result += ")"

if __name__ == "__main__":
    N = int(input())

    for i in range(N):
        str = input()
        v = []

        for j in range(N):
            v.append(str[j])
        video.append(v)

    DNC(0, 0, N)

    print(result)
