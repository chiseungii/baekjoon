#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(char &c1, char &c2) {
	char tmp = c1;
	c1 = c2;
	c2 = tmp;
}

string reverse(string s1, string s2, string s3) {
	for (int i = 0; i < s1.length() / 2; i++)
		swap(s1[i], s1[s1.length() - 1 - i]);
	for (int i = 0; i < s2.length() / 2; i++)
		swap(s2[i], s2[s2.length() - 1 - i]);
	for (int i = 0; i < s3.length() / 2; i++)
		swap(s3[i], s3[s3.length() - 1 - i]);

	return s1 + s2 + s3;
}

int main() {
	string word; cin >> word;

	vector<string> changes;
	for (int i = 1; i < word.length() - 1; i++) {
		for (int j = i + 1; j < word.length(); j++) {
			string w1 = word.substr(0, i);
			string w2 = word.substr(i, j - i);
			string w3 = word.substr(j);
			changes.push_back(reverse(w1, w2, w3));
		}
	}

	sort(changes.begin(), changes.end());
	cout << changes[0] << endl;
}
