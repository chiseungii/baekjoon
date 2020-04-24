#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int bin[21] = { 0, };
		int n; cin >> n;

		int two = 2, index = 1;
		while (two <= n) { two *= 2; index++; }
		two /= 2; index--;

		while (n > 0) {
			if (two <= n) {
				n -= two;
				bin[index] = 1;
			}

			two /= 2;
			index--;
		}

		for (int i = 0; i < 21; i++)
			if (bin[i]) cout << i << ' ';
		cout << endl;
	}
}
