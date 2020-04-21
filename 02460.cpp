#include <iostream>
using namespace std;

int main() {
	int people = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		int on, off; cin >> off >> on;

		people -= off;
		people += on;

		if (people > max) max = people;
	}

	cout << max << endl;
}
