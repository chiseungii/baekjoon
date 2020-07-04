#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;

	int cnt_2 = 0, cnt_e = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '2') cnt_2++;
		else cnt_e++;
	}

	if (cnt_2 == cnt_e) cout << "yee\n";
	else if (cnt_2 > cnt_e) cout << 2 << endl;
	else cout << "e\n";
}
