#include <iostream>
using namespace std;

int main() {
	int M; cin >> M;

	int dir = 0, turn = 1;
	for (int i = 0; i < M; i++) {
		int a, b, c; cin >> a >> b >> c;

		turn = turn / a * b;
		if (c) dir = !dir;
	}

	cout << dir << ' ' << turn << endl;
}
