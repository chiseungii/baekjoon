#include <iostream>
using namespace std;

int main() {
	int max = 0, max_i, max_j;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int a; cin >> a;
		
			if (a > max) {
				max = a;
				max_i = i;
				max_j = j;
			}
		}
	}

	cout << max << endl;
	cout << max_i + 1 << ' ' << max_j + 1 << endl;
}
