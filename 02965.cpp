#include <iostream>
using namespace std;

int main() {
	int A, B, C; cin >> A >> B >> C;

	int term1 = B - A, term2 = C - B;
	if (term1 >= term2)
		cout << term1 - 1 << endl;
	else cout << term2 - 1 << endl;
}
