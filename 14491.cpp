#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	int nine[5] = { 0, };
	int base = 6561, index = 4;
	while (T > 0) {
		if (T >= base) {
			nine[index] = T / base;
			T %= base;
		}

		base /= 9;
		index--;
	}

	index = 4;
	while (!nine[index]) index--;
	for (; index >= 0; index--)
		cout << nine[index];
	cout << endl;
}
