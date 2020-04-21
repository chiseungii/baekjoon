#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int cnt[2] = { 0,0 };
		int a, b, c, d; cin >> a >> b >> c >> d;
		cnt[a]++; cnt[b]++; cnt[c]++; cnt[d]++;

		if (cnt[0] == 1) cout << "A\n";
		else if (cnt[0] == 2) cout << "B\n";
		else if (cnt[0] == 3) cout << "C\n";
		else if (cnt[0] == 4) cout << "D\n";
		else cout << "E\n";
	}
}
