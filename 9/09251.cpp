#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int DP[1001][1001];

int main() {
	string s1, s2; cin >> s1 >> s2;

	for (int i = 1; i <= s2.length(); i++) {
		for (int j = 1; j <= s1.length(); j++) {
			if (s1[j - 1] == s2[i - 1])
				DP[i][j] = DP[i - 1][j - 1] + 1;
			else
				DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
		}
	}

	cout << DP[s2.length()][s1.length()] << endl;
}
