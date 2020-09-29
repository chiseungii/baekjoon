#include <iostream>
#include <string>
using namespace std;

#define MOD 1000000

int DP[5000];

int main() {
	string s; cin >> s;

	bool flag = true;
	if (s[0] == '0') {
		DP[s.length() - 1] = 0;
		flag = false;
	}
	else {
		DP[0] = 1;
		if (s[1] == '0') {
			if (stoi(s.substr(0, 2)) <= 26) DP[1] = 1;
			else {
				DP[s.length() - 1] = 0;
				flag = false;
			}
		}
		else if (stoi(s.substr(0, 2)) <= 26) DP[1] = 2;
		else DP[1] = 1;
	}

	if (flag) {
		for (int i = 2; i < s.length(); i++) {
			if (s[i] == '0') {
				if ((s[i - 1] == '0' || stoi(s.substr(i - 1, 2)) > 26)) {
					DP[s.length() - 1] = 0;
					break;
				}
				else DP[i] = DP[i - 2] % MOD;
			}
			else if (s[i - 1] == '0')
				DP[i] = DP[i - 1] % MOD;
			else if (stoi(s.substr(i - 1, 2)) <= 26)
				DP[i] = (DP[i - 1] + DP[i - 2]) % MOD;
			else DP[i] = DP[i - 1] % MOD;
		}
	}

	cout << DP[s.length() - 1] << endl;
}
