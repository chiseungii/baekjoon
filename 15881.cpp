#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;

	int cnt = 0;
	for (int i = 0; i < s.length() - 3; i++) {
		if (s.substr(i, 4) == "pPAp") {
			cnt++;
			i += 3;
		}
	}

	cout << cnt << endl;
}
