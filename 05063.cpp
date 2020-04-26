#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int r, e, c; cin >> r >> e >> c;

		if (e - c == r) cout << "does not matter\n";
		else if (e - c > r) cout << "advertise\n";
		else cout << "do not advertise\n";
	}
}
