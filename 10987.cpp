#include <iostream>
#include <string>
using namespace std;

int main() {
	string vowel = "aeiou";
	string s; cin >> s;

	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
		if (vowel.find(s[i]) != -1)
			cnt++;

	cout << cnt << endl;
}
