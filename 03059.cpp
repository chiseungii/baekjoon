#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		char alpha[26];
		for (int i = 0; i < 26; i++)
			alpha[i] = 0;

		string s; cin >> s;
		for (int i = 0; i < s.length(); i++)
			alpha[s[i] - 'A'] = 1;

		int ascii = 0;
		for (int i = 0; i < 26; i++)
			if (!alpha[i])
				ascii += i + (int)'A';

		cout << ascii << endl;
	}
}
