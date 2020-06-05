#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	getchar();

	for (int i = 0; i < n; i++) {
		string s; getline(cin, s);

		int g = 0, b = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'g' || s[j] == 'G') g++;
			else if (s[j] == 'b' || s[j] == 'B') b++;
		}

		if (g == b)
			cout << s << " is NEUTRAL\n";
		else if (g > b)
			cout << s << " is GOOD\n";
		else
			cout << s << " is A BADDY\n";
	}
}
