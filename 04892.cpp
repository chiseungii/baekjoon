#include <iostream>
using namespace std;

int main() {
	int num = 1;
	while (1) {
		int n0; cin >> n0;
		if (!n0) break;

		cout << num++ << ". ";

		int n1 = 3 * n0;
		int n2;
		if (n1 % 2) {
			cout << "odd ";
			n2 = (n1 + 1) / 2;
		}
		else {
			cout << "even ";
			n2 = n1 / 2;
		}

		int n3 = 3 * n2;
		int n4 = n3 / 9;
		cout << n4 << endl;
	}
}
