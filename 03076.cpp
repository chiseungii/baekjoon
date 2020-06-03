#include <iostream>
using namespace std;

int main() {
	int R, C, A, B;
	cin >> R >> C >> A >> B;

	string row;
	bool black1 = true, black2;
	for (int i = 0; i < R; i++) {
		row = ""; black2 = black1;
		for (int j = 0; j < C; j++) {
			if (black2)
				for (int k = 0; k < B; k++)
					row += "X";
			else
				for (int k = 0; k < B; k++)
					row += ".";

			black2 = !black2;
		}

		for (int j = 0; j < A; j++)
			cout << row << '\n';

		black1 = !black1;
	}
}
