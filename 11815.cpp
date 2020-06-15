#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		long long X; cin >> X;

		if ((long long)sqrt(X) * (long long)sqrt(X) == X) cout << 1 << ' ';
		else cout << 0 << ' ';
	}

	cout << endl;
}
