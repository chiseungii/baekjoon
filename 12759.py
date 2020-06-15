tictactoe = [[11, 12, 13], [21, 22, 23], [31, 32, 33]]
global winner

def isWin():
    global winner

    for i in range(3):
        if tictactoe[i][0] == tictactoe[i][1] and tictactoe[i][0] == tictactoe[i][2]:
            winner = tictactoe[i][0]
            return True
        if tictactoe[0][i] == tictactoe[1][i] and tictactoe[0][i] == tictactoe[2][i]:
            winner = tictactoe[0][i]
            return True

    if tictactoe[0][0] == tictactoe[1][1] and tictactoe[0][0] == tictactoe[2][2]:
        winner = tictactoe[0][0]
        return True
    if tictactoe[0][2] == tictactoe[1][1] and tictactoe[0][2] == tictactoe[2][0]:
        winner = tictactoe[0][2]
        return True

    winner = ' '
    return False

start = int(input())

winner = ' '
for i in range(9):
    x, y = map(int, input().split())

    if start == 2:
        tictactoe[x - 1][y - 1] = 'X'
        start = 1
    else:
        tictactoe[x - 1][y - 1] = 'O'
        start = 2

    if winner == ' ':
        isWin()

if winner == 'X': print(2)
elif winner == 'O': print(1)
else: print(0)
