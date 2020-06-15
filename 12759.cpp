#include <iostream>
using namespace std;

int tictactoe[3][3];

bool isWin(char &winner) {
	for (int i = 0; i < 3; i++) {
		if (tictactoe[i][0] == tictactoe[i][1] && tictactoe[i][0] == tictactoe[i][2]) {
			winner = tictactoe[i][0];
			return true;
		}
		if (tictactoe[0][i] == tictactoe[1][i] && tictactoe[0][i] == tictactoe[2][i]) {
			winner = tictactoe[0][i];
			return true;
		}
	}

	if (tictactoe[0][0] == tictactoe[1][1] && tictactoe[0][0] == tictactoe[2][2]) {
		winner = tictactoe[0][0];
		return true;
	}
	if (tictactoe[0][2] == tictactoe[1][1] && tictactoe[0][2] == tictactoe[2][0]) {
		winner = tictactoe[0][2];
		return true;
	}

	winner = ' ';
	return false;
}

int main() {
	int start; cin >> start;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			tictactoe[i][j] = 10 * i + j;

	char winner = ' ';
	for (int i = 0; i < 9; i++) {
		int x, y; cin >> x >> y;

		if (start == 2) {
			tictactoe[x - 1][y - 1] = 'X';
			start = 1;
		}
		else {
			tictactoe[x - 1][y - 1] = 'O';
			start = 2;
		}

		if (winner == ' ')
			isWin(winner);
	}

	if (winner == 'X') cout << 2 << endl;
	else if(winner=='O') cout << 1 << endl;
	else cout<<0<<endl;
}
