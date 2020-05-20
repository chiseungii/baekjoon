#include <iostream>
using namespace std;

int main() {
	long long a; cin >> a;
	bool door; cin >> door;

	if (a >= 6) cout << "Love is open door\n";
	else {
		for (int i = 1; i < a; i++) {
			door = !door;
			cout << door << '\n';
		}
	}
}
