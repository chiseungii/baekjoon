#include <iostream>
using namespace std;

int main() {
	int C1; cin >> C1;

	int Cn = C1, n = 1, before;
	while (Cn != 1) {
		before = Cn;
		int mod = before % 2;
		Cn = mod * (3 * before + 1) + (1 - mod) * (before / 2);
		n++;
	}

	cout << n << endl;
}
