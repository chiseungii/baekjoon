#include <iostream>
using namespace std;

int main() {
	int N, K; cin >> N >> K;

	int tap = 0;
	for (int i = 0; i < K; i++) {
		int a; cin >> a;

		if (a % 2) tap += (a / 2 + 1);
		else tap += (a / 2);
	}

	if (N <= tap) cout << "YES\n";
	else cout << "NO\n";
}
