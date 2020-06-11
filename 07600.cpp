#include <iostream>
#include <string>
using namespace std;

int main() {
	bool alpha[26];
	while (1) {
		string s; getline(cin, s);
		if (s == "#") break;

		for (int i = 0; i < 26; i++)
			alpha[i] = false;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z')
				alpha[s[i] - 'a'] = true;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				alpha[s[i] - 'A'] = true;
		}

		int cnt = 0;
		for (int i = 0; i < 26; i++)
			if (alpha[i]) cnt++;

		cout << cnt << endl;
	}
}
