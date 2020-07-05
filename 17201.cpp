#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string a; cin >> a;

	bool connect = true;
	if (a[0] == '1') {
		for (int i = 0; i < a.length(); i += 2) {
			if (a[i] != '1' || a[i + 1] != '2') {
				connect = false;
				break;
			}
		}
	}
	else {
		for (int i = 0; i < a.length(); i += 2) {
			if (a[i] != '2' || a[i + 1] != '1') {
				connect = false;
				break;
			}
		}
	}

	if (connect) cout << "Yes\n";
	else cout << "No\n";
}
