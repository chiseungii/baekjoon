#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string S; cin >> S;	// 문자열 S
	set<string> subSet;	// 부분문자열

	for (int len = 1; len <= S.length(); len++) {	// len: 부분문자열 길이
		for (int i = 0; i <= S.length() - len; i++) {
			subSet.insert(S.substr(i, len));
		}
	}

	cout << subSet.size() << endl;
}
