#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int yonsei = 0, korea = 0;
		for (int i = 0; i < 9; i++) {
			int y, k; cin >> y >> k;
			yonsei += y; korea += k;
		}

		if (yonsei > korea) cout << "Yonsei\n";
		else if (yonsei < korea) cout << "Korea\n";
		else cout << "Draw\n";
	}
}
