#include <iostream>
using namespace std;

int main() {
	double A, B, C, D; cin >> A >> B >> C >> D;
	double max = A / C + B / D;

	int max_rot = 0;
	for (int i = 0; i < 3; i++) {
		double tmp = A;
		A = C; C = D; D = B; B = tmp;
		tmp = A / C + B / D;
		if (tmp > max) {
			max = tmp;
			max_rot = i + 1;
		}
	}

	cout << max_rot << endl;
}
