#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;

	int sum = 1;
	char before = 'a';

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		if (c == 'c') {
			if (before == 'c') sum *= 25;
			else sum *= 26;
		}
		else {
			if (before == 'd') sum *= 9;
			else sum *= 10;
		}

		before = c;
	}

	cout << sum << endl;
}
