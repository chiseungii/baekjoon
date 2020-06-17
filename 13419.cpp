#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		string s; cin >> s;

		string answer1, answer2;
		if (s.length() % 2) {
			answer1 = "";
			for (int j = 0; j < s.length(); j += 2)
				answer1 += s[j];
			for (int j = 1; j < s.length(); j += 2)
				answer1 += s[j];

			answer2 = "";
			for (int j = 1; j < s.length(); j += 2)
				answer2 += s[j];
			for (int j = 0; j < s.length(); j += 2)
				answer2 += s[j];
		}
		else {
			answer1 = "";
			for (int j = 0; j < s.length(); j += 2)
				answer1 += s[j];

			answer2 = "";
			for (int j = 1; j < s.length(); j += 2)
				answer2 += s[j];
		}

		cout << answer1 << endl << answer2 << endl;
	}
}
