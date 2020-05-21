#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	if (N <= 9) cout << N << endl;
	else {
		int cnt = 9;
		for (int i = 10; i <= N; i++) {
			int n = i, sum = 0;
			while (n > 0) {
				sum += n % 10;
				n /= 10;
			}

			if (i % sum == 0) cnt++;
		}

		cout << cnt << endl;
	}
}
