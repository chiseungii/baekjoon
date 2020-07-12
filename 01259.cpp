#include <iostream>
using namespace std;

int main() {
	while (1) {
		string s; cin >> s;
		if (s == "0") break;

		bool isPal = true;
		for (int i = 0; i <= (s.length() - 1) / 2; i++) {
			if (s[i] != s[s.length() - 1 - i]) {
				isPal = false;
				break;
			}
		}

		if (isPal) cout << "yes\n";
		else cout << "no\n";
	}
}
