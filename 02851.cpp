#include <iostream>
using namespace std;

int main() {
	int mushrooms[10];
	for (int i = 0; i < 10; i++)
		cin >> mushrooms[i];

	int score = 0;
	int a, b;
	for (int i = 0; i < 10; i++) {
		score += mushrooms[i];

		if (score >= 100) {
			a = score - mushrooms[i];
			b = score;
			break;
		}
	}

	if (a == 100 || b == 100) cout << 100 << endl;
	else if ((b - 100) == (100 - a)) cout << b << endl;
	else {
		if ((b - 100) > (100 - a)) cout << a << endl;
		else cout << b << endl;
	}
}
