#include <iostream>
using namespace std;

int main() {
	double A, B, C; cin >> A >> B >> C;
	double I, J, K; cin >> I >> J >> K;

	double r1 = A / I;
	double r2 = B / J;
	double r3 = C / K;

	if (r1 == r2 && r1 == r3) cout << "0 0 0\n";
	else {
		double min = r1;
		if (r2 < min) min = r2;
		if (r3 < min) min = r3;

		printf("%.4f %.4f %.4f\n", A - min * I, B - min * J, C - min * K);
	}
}
