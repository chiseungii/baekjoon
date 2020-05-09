#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int n, sum = 0;
		while (1) {
			cin >> n;
			sum += n;

			if (getchar() == '\n') break;
		}

		cout << sum << endl;
	}
}
