#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {
	int num = 1;
	while (1) {
		string s; cin >> s;	// 문자열
		if (s.length() >= 1 && s[0] == '-') break;

		bool isStable = true;
		stack<char> check;
		int cntChange = 0;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '{') {
				check.push('{');
			}
			else {
				if (check.empty()) {
					isStable = false;
					cntChange++;
					check.push('{');
				}
				else check.pop();
			}
		}

		if (check.empty() && isStable) printf("%d. %d\n", num++, 0);
		else {
			cntChange += check.size() / 2;
			printf("%d. %d\n", num++, cntChange);
		}
	}
}
