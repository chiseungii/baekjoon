#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int alpha[26] = { 0, };
	string s;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i]))
				alpha[s[i] - 'a']++;
	}

	int max_cnt = 0;
	for (int i = 0; i < 26; i++)
		if (alpha[i] > max_cnt) max_cnt = alpha[i];

	for (int i = 0; i < 26; i++)
		if (alpha[i] == max_cnt)
			cout << (char)(i + 'a');
	cout << endl;
}
