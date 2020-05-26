#include <iostream>
using namespace std;

int* trophy;

int main() {
	int N; cin >> N;

	trophy = new int[N];
	for (int i = 0; i < N; i++)
		cin >> trophy[i];

	int cnt = 0, max_trophy = 0;
	for (int i = 0; i < N; i++) {
		if (trophy[i] > max_trophy) {
			cnt++;
			max_trophy = trophy[i];
		}
	}
	cout << cnt << endl;

	cnt = 0, max_trophy = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (trophy[i] > max_trophy) {
			cnt++;
			max_trophy = trophy[i];
		}
	}
	cout << cnt << endl;

	delete[] trophy;
}
