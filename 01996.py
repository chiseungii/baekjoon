N = int(input())

map = ['0' * (N + 2)]
for i in range(N):
    tmp = input()
    tmp = '0' + tmp + '0'
    map.append(tmp)
map.append('0' * (N + 2))
result_map = []

move_i = [0, -1, -1, -1, 0, 1, 1, 1]
move_j = [-1, -1, 0, 1, 1, 1, 0, -1]
for i in range(1, N + 1):
    result = ""
    for j in range(1, N + 1):
        if map[i][j] == '.':
            sum = 0
            for k in range(8):
                mi = move_i[k]; mj = move_j[k]
                if map[i+mi][j+mj].isdigit():
                    sum += int(map[i+mi][j+mj])

            if sum >= 10: result += 'M'
            else: result += str(sum)
        else:
            result += '*'

    result_map.append(result)

for ri in result_map:
    print(ri)
