#include <iostream>
using namespace std;

int PN(string s, int n) {
	int cnt = 0;
	int num = 0;

	for (int i = 0; i < s.length() - 2; i++) {
		if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
			num++;	// Pn 하나 늘림

			if (num == n) {
				cnt++;
				num--;
			}

			i++;
		}
		else num = 0;
	}

	return cnt;
}

int main() {
	int N; cin >> N;	// PN
	int M; cin >> M;	// 문자열 길이
	string S; cin >> S;	// 문자열

	cout << PN(S, N) << endl;
}
