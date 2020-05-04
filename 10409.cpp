#include <iostream>
using namespace std;

int main() {
	int n, T; cin >> n >> T;

	int* times = new int[n];
	for (int i = 0; i < n; i++)
		cin >> times[i];

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (times[i] > T) break;
		T -= times[i];
		cnt++;
	}

	cout << cnt << endl;
	delete[] times;
}
