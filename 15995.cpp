#include <iostream>
using namespace std;

int main() {
	int a, m; cin >> a >> m;

	int i = 1;
	while (1) {
		if ((a * i - 1) % m == 0) {
			cout << i << endl;
			break;
		}
		else i++;
	}
}
