#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int max = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;

		sum += a;
		if (a > max) max = a;
	}

	cout << sum - max << endl;
}
