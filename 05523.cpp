#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int cnt_A = 0, cnt_B = 0;
	for (int i = 0; i < N; i++) {
		int A, B; cin >> A >> B;

		if (A > B) cnt_A++;
		else if (A < B) cnt_B++;
	}

	cout << cnt_A << ' ' << cnt_B << endl;
}
