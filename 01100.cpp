#include <iostream>
using namespace std;

int main() {
	int horse = 0, white = 1;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char c; cin >> c;

			if (white && c == 'F')
				horse++;

			white = !white;
		}
		white = !white;
	}

	cout << horse << endl;
}
