#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int candy, bro; cin >> candy >> bro;

		cout << "You get " << candy / bro << " piece(s) and your dad gets "
			<< candy % bro << " piece(s).\n";
	}
}
