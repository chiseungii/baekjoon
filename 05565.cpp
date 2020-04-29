#include <iostream>
using namespace std;

int main() {
	int cost; cin >> cost;
	for (int i = 0; i < 9; i++) {
		int a; cin >> a;
		cost -= a;
	}

	cout << cost << endl;
}
