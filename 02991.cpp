#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, P, M, N;
	cin >> A >> B >> C >> D >> P >> M >> N;
	int late = P;
	if (M > late) late = M;
	if (N > late) late = N;

	int dog1[1000] = { 0, };
	int dog2[1000] = { 0, };
	int i = 0;
	while (i <= late) {
		for (int j = i + 1; j <= i + A; j++)
			dog1[j] = 1;

		i += (A + B);
	}
	i = 0;
	while (i <= late) {
		for (int j = i + 1; j <= i + C; j++)
			dog2[j] = 1;

		i += (C + D);
	}

	cout << dog1[P] + dog2[P] << endl;
	cout << dog1[M] + dog2[M] << endl;
	cout << dog1[N] + dog2[N] << endl;
}
