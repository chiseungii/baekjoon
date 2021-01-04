#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;

	int cnt = 0;
	for (int tc = 0; tc < N; tc++) {
		string s; cin >> s;

		stack<char> AB;
		// bool inA = false, inB = false;
		// bool goodStr = true;
		for (int i = 0; i < s.length(); i++) {
			if (AB.empty()) AB.push(s[i]);
			else if (AB.top() == s[i]) AB.pop();
			else AB.push(s[i]);
		}

		if (AB.empty()) cnt++;
	}

	cout << cnt << endl;
}
