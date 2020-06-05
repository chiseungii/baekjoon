#include <iostream>
using namespace std;

int main() {
	while (1) {
		string s; cin >> s;
		if (s == "#") break;

		bool valid = true;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'b') s[i] = 'd';
			else if (s[i] == 'd') s[i] = 'b';
			else if (s[i] == 'p') s[i] = 'q';
			else if (s[i] == 'q') s[i] = 'p';
			else if (s[i] == 'i' || s[i] == 'o' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x');
			else valid = false;
		}

		if (!valid) cout << "INVALID\n";
		else {
			for (int i = s.length() - 1; i >= 0; i--)
				cout << s[i];
			cout << endl;
		}
	}
}
