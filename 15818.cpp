#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	long long result = 1;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		result *= (a % M);
		result %= M;
	}

	cout << result << endl;
}
