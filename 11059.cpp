#include <iostream>
using namespace std;

bool isCree(string s) {
	int a = 0, b = 0;
	for (int i = 0; i < s.length() / 2; i++)
		a += s[i] - '0';
	for (int i = s.length() / 2; i < s.length(); i++)
		b += s[i] - '0';

	if (a == b) return true;
	else return false;
}

int main() {
	string s; cin >> s;

	int len = s.length();
	if (len % 2) len--;
	while (1) {
		bool found = false;
		for (int i = 0; i <= s.length() - len; i++) {
			if (isCree(s.substr(i, len))) {
				cout << len << endl;
				found = true;
				break;
			}
		}

		if (found) break;

		len -= 2;
	}
}
