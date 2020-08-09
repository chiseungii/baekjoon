#include <iostream>
using namespace std;

int main() {
	while (1) {
		int N; cin >> N;
		if (!N) break;

		while (N / 10) {
			int tmp = 0;
			while (N > 0) {
				tmp += N % 10;
				N /= 10;
			}
			N = tmp;
		}

		cout << N << endl;
	}
}
