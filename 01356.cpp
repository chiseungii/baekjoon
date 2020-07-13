#include <iostream>
using namespace std;

int main() {
	string N; cin >> N;

	bool isRight = false;
	for (int i = 0; i < N.length() - 1; i++) {
		int left = 1;
		for (int j = 0; j <= i; j++)
			left *= N[j] - '0';

		int right = 1;
		for (int j = i + 1; j < N.length(); j++)
			right *= N[j] - '0';

		if (left == right) {
			isRight = true;
			break;
		}
	}

	if (isRight) cout << "YES\n";
	else cout << "NO\n";
}
