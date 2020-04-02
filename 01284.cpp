// 집 주소

#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string s; cin >> s;
		if (s == "0") break;

		int res = s.length() + 1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1') res += 2;
			else if (s[i] == '0') res += 4;
			else res += 3;
		}

		cout << res << endl;
	}
}
