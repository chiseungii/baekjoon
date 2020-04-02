// 핸드폰 요금

#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int Y = 0, M = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;

		Y += ((a / 30 + 1) * 10);
		M += ((a / 60 + 1) * 15);
	}

	if (Y < M) cout << 'Y' << ' ' << Y << endl;
	else if (Y > M) cout << 'M' << ' ' << M << endl;
	else cout << "Y M " << Y << endl;
}
