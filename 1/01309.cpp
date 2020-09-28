#include <iostream>
using namespace std;

#define MOD 9901

int DP[100001];

int main() {
	int N; cin >> N;

	DP[0] = 1;
	DP[1] = 3;
	for (int i = 2; i <= N; i++) {
		DP[i] = 2 * DP[i - 1] + DP[i - 2];
		DP[i] %= MOD;
	}

	cout << DP[N] << endl;
}
