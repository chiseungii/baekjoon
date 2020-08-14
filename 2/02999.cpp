#include <iostream>
#include <cmath>
using namespace std;

char board[100][100];

int main() {
	string message; cin >> message;
	int len = message.length();

	int R, C;
	for (int i = (int)sqrt(len); i >= 1; i--) {
		if (len % i == 0) {
			R = i;
			C = len / i;
			break;
		}
	}

	int index = 0;
	for (int i = 0; i < C; i++)
		for (int j = 0; j < R; j++)
			board[j][i] = message[index++];

	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cout << board[i][j];
	cout << endl;
}
