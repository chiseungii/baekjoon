#include <iostream>
#include <string>
using namespace std;

int main() {
	int T; cin >> T;
	getchar();

	int alpha[26];
	for (int i = 0; i < T; i++) {
		string s; getline(cin, s);

		for (int i = 0; i < 26; i++)
			alpha[i] = 0;

		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i]))
				alpha[s[i] - 'a']++;

		int max_index = 0, max = alpha[0];
		bool multi = false;
		for (int i = 1; i < 26; i++) {
			if (alpha[i] > max) {
				max_index = i;
				max = alpha[i];
				multi = false;
			}
			else if (alpha[i] == max)
				multi = true;
		}

		if (multi) cout << "?\n";
		else cout << (char)(max_index + 'a') << endl;
	}
}
