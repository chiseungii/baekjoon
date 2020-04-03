// 공

#include <iostream>
using namespace std;

int main() {
	int M; cin >> M;
	int ball = 1;
	for (int i = 0; i < M; i++) {
		int X, Y; cin >> X >> Y;

		if (X == ball) ball = Y;
		else if (Y == ball) ball = X;
	}

	cout << ball << endl;
}
