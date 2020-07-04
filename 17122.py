colors = [1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0]

for i in range(int(input())):
    chess1, chess2 = input().split()
    chess2 = int(chess2)

    chess1_int = (int(chess1[1]) - 1) * 8
    chess1_int += ord(chess1[0]) - ord('A') + 1

    if colors[chess1_int % 16] == colors[chess2 % 16]:
        print("YES")
    else: print("NO")
