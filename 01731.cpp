#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	
	int a, P, Qp, Qm; cin >> P >> a;
	Qp = a - P; Qm = a / P;
	P = a;

	bool plus = true;
	for (int i = 0; i < N-2; i++) {
		cin >> a;

		if (a - P != Qp) plus = false;
		P = a;
	}

	if (plus) cout << P + Qp << endl;
	else cout << P * Qm << endl;
}
