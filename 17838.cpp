#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		string command; cin >> command;

		if (command.length() != 7) cout << 0 << endl;
		else {
			if (command[0] != command[1] || command[0] != command[4]) cout << 0 << endl;
			else if (command[2] != command[3] || command[2] != command[5] || command[2] != command[6])
				cout << 0 << endl;
			else if (command[0] == command[2]) cout << 0 << endl;
			else cout << 1 << endl;
		}
	}
}
