#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;

	int left = 0;
	for (int i = 0; i < s.length() / 2; i++)
		left += s[i] - '0';

	int right = 0;
	for (int i = s.length() / 2; i < s.length(); i++)
		right += s[i] - '0';

	if (left == right) cout << "LUCKY\n";
	else cout << "READY\n";
}
