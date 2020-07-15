#include <iostream>
using namespace std;

bool isMinsoo(int n) {
	bool result = true;
	while (n > 0) {
		if (n % 10 != 4 && n % 10 != 7)
			result = false;

		n /= 10;
	}

	return result;
}

int main() {
	int N; cin >> N;

	for (int i = N; i >= 4; i--) {
		if (isMinsoo(i)) {
			cout << i << endl;
			break;
		}
	}
}
