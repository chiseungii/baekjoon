#include <iostream>
using namespace std;

int main() {
	int max = 0, max_num = 0;
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int a; cin >> a;
			sum += a;
		}

		if (sum > max) {
			max = sum;
			max_num = i + 1;
		}
	}

	cout << max_num << ' ' << max << endl;
}
