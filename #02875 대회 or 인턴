#include <iostream>
using namespace std;

int team(int n, int m, int k) {
	int rest = 0;
	
	if (n % 2 != 0) {
		rest++;
		n--;
	}
	if (n > m * 2) {
		rest += (n - m * 2);
		n -= (n - m * 2);
	}
	if (m > n / 2) {
		rest += (m - n / 2);
		m -= (m - n / 2);
	}

	k -= rest;
	while (k > 0) {
		n -= 2;
		m--;
		k -= 3;
	}

	return m;
}

int main() {
	int N, M, K; cin >> N >> M >> K;
	cout << team(N, M, K) << endl;
}
