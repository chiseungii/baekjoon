#include <iostream>
using namespace std;

int beauty(int n) {
	int num[10];
	for (int i = 0; i < 10; i++)
		num[i] = 0;

	while (n > 0) {
		num[n % 10]++;
		n /= 10;
	}

	int cnt = 0;
	for (int i = 0; i < 10; i++)
		if (num[i]) cnt++;

	return cnt;
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int X; cin >> X;
		cout << beauty(X) << endl;
	}
}
