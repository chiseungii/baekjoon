#include <iostream>
using namespace std;

int main() {
	int A, B; cin >> A >> B;
	string C; cin >> C;

	char last = C[C.length() - 1] - '0';
	if (last % 2) A ^= B;
	
	cout << A << endl;
}
