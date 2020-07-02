#include <iostream>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	getchar();

	for (int i = 0; i < N; i++) {
		string s; getline(cin, s);

		int sum = 0;
		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i]))
				sum += s[i] - 'A' + 1;

		if (sum == 100) cout << "PERFECT LIFE\n";
		else cout << sum << endl;
	}
}
