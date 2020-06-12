#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	getchar();

	for (int i = 0; i < n; i++) {
		string s; getline(cin, s);
		for (int j = 0; j < s.length(); j++)
			if (isalpha(s[j]))
				s[j] = tolower(s[j]);

		bool correct = true;
		if (s.length() % 2) {
			for (int j = 0; j < s.length() / 2; j++)
				if (s[j] != s[s.length() - j - 1])
					correct = false;
		}
		else {
			for (int j = 0; j <= s.length() / 2; j++)
				if (s[j] != s[s.length() - j - 1])
					correct = false;
		}

		if (correct) cout << "Yes\n";
		else cout << "No\n";
	}
}
