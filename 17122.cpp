#include <iostream>
using namespace std;

#define WHITE 0
#define BLACK 1

int main() {
	int colors[16] = { 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0 };

	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		string chess1; int chess2;
		cin >> chess1 >> chess2;

		int chess1_int = (chess1[1] - '0' - 1) * 8;
		chess1_int += chess1[0] - 'A' + 1;

		if (colors[chess1_int % 16] == colors[chess2 % 16])
			cout << "YES\n";
		else cout << "NO\n";
	}
}
