#include <iostream>
using namespace std;

int sticks[100000];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> sticks[i];

	int cnt = 0, max = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (sticks[i] > max) {
			cnt++;
			max = sticks[i];
		}
	}

	cout << cnt << endl;
}
