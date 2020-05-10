#include <iostream>
using namespace std;

int main() {
	int A, B, C; cin >> A >> B >> C;

	for (int i = 0; i < C; i++)
		A = A ^ B;

	cout << A << endl;
}
