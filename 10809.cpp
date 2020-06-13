#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;

	int alpha[26];
	for (int i = 0; i < 26; i++)
		alpha[i] = -1;

	for (int i = 0; i < s.length(); i++)
		if (alpha[s[i] - 'a'] == -1)
			alpha[s[i] - 'a'] = i;

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';
	cout << endl;
}
