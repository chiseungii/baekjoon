#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		long long A, B; cin >> A >> B;

		if ((A * A) % (B * B)) cout << (A * A) / (B * B) + 1 << endl;
		else cout << (A * A) / (B * B) << endl;
	}
}
