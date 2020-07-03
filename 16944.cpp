#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;
	string S; cin >> S;

	bool small, big, special, digit;
	small = big = special = digit = false;
	for (int i = 0; i < S.length(); i++) {
		if (isdigit(S[i])) digit = true;
		else if (isalpha(S[i])) {
			if (isupper(S[i])) big = true;
			else small = true;
		}
		else special = true;
	}

	int cnt = 0;
	cnt += !small + !big + !special + !digit;

	cout << max(6 - N, cnt) << endl;
}
