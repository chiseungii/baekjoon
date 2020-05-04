#include <iostream>
using namespace std;

int main() {
	while (1) {
		int A, B; cin >> A >> B;
		if (!A && !B) break;

		cout << A + B << endl;
	}
}
