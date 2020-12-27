#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t; cin >> t;

	for (int tc = 0; tc < t; tc++) {
		string s; cin >> s;
		stack<char> VPS;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') VPS.push('(');
			else if (s[i] == ')') {
				if (VPS.empty()) {
					VPS.push(')');
					break;
				}
				else VPS.pop();
			}
		}

		if (VPS.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
}
