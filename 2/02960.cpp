#include <iostream>
using namespace std;

char prime[1001];

int main() {
	int N, K; cin >> N >> K;

	fill_n(prime, 1001, 1);
	for (int i = 2; i <= N; i++) {
		if (prime[i]) {
			for (int j = i; j <= N; j += i) {
				if (prime[j]) {
					prime[j] = 0;
					K--;

					if (!K) {
						cout << j << endl;
						return 0;
					}
				}
			}
		}
	}
}
