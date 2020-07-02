#include <iostream>
#include <string>
using namespace std;

int main() {
	int k, l; cin >> k >> l;
	getchar();
	k %= 26;
	string s; getline(cin, s);

	if (k == 0) cout << s << endl;
	else {
		for (int i = 0; i < l; i++) {
			if (isalpha(s[i])) {
				if (isupper(s[i])) {
					int a = s[i] - 'A';
					a += k;
					a %= 26;
					s[i] = a + 'A';
				}
				else {
					int a = s[i] - 'a';
					a += k;
					a %= 26;
					s[i] = a + 'a';
				}
			}
		}

		cout << s << endl;
	}
}
