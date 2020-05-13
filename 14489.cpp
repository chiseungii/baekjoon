#include <iostream>
using namespace std;

int main() {
	int A, B; cin >> A >> B;
	int C; cin >> C;

	if (A + B >= 2 * C)
		cout << A + B - (2 * C) << endl;
	else
		cout << A + B << endl;
}
