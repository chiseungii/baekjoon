#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int alpha1[26], alpha2[26];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 26; j++)
			alpha1[j] = alpha2[j] = 0;

		string s1, s2; cin >> s1 >> s2;

		if (s1.length() != s2.length()) {
			cout << "Impossible\n";
			continue;
		}
		else {
			for (int j = 0; j < s1.length(); j++) {
				alpha1[s1[j] - 'a']++;
				alpha2[s2[j] - 'a']++;
			}
		}

		bool possible = true;
		for (int j = 0; j < 26; j++) {
			if (alpha1[j] != alpha2[j]) {
				possible = false;
				break;
			}
		}

		if (possible) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}
