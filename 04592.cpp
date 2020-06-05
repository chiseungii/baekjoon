#include <iostream>
using namespace std;

int main() {
	while (1) {
		int N; cin >> N;
		if (!N) break;

		int num = -1;
		for (int i = 0; i < N; i++) {
			int n; cin >> n;

			if (n != num) {
				num = n;
				cout << num << ' ';
			}
		}

		cout << "$\n";
	}
}
