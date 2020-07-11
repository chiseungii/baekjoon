#include <iostream>
using namespace std;

int main() {
	int cnt[26];
	for (int i = 0; i < 26; i++) cnt[i] = 0;

	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i])) cnt[s[i] - 'A']++;
		else cnt[s[i] - 'a']++;
	}

	bool only_one = true;
	int max_index = 0, max_cnt = cnt[0];
	for (int i = 1; i < 26; i++) {
		if (cnt[i] == max_cnt && cnt[i])
			only_one = false;
		else if (cnt[i] > max_cnt) {
			max_index = i;
			max_cnt = cnt[i];
			only_one = true;
		}
	}

	if (max_cnt == 0)
		only_one = false;

	if (!only_one) cout << "?\n";
	else cout << (char)(max_index + 'A') << endl;
}
