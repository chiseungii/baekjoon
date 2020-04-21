#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int N; cin >> N;
		long long candy = 0;
		for (int j = 0; j < N; j++) {
			long long a; cin >> a;
			candy += a;
			candy %= N;
		}

		if (candy) cout << "NO\n";
		else cout << "YES\n";
	}
}
