#include <iostream>
using namespace std;

int main() {
	while (1) {
		string s; cin >> s;
		if (s == "#") break;

		bool change = false;
		for (int i = 0; i < s.length(); i++) {
			if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') {
				change = true;
				s += "ay";
				break;
			}
			else {
				s = s.substr(1, s.length() - 1) + s[0];
			}
		}

		if (!change) cout << s + "ay" << endl;
		else cout << s << endl;
	}
}
