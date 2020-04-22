#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int dot[16];
	dot[0] = 4;

	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		int block = pow(2, i - 1);
		int plus_dot = block * block + block * (block + 1) * 2;
		dot[i] = dot[i - 1] + plus_dot;
	}

	cout << dot[N] << endl;
}
