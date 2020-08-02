#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N; cin >> M >> N;

	int sum = 0, min;
	for (int i = N; i >= M; i--) {
		if ((int)sqrt(i) * (int)sqrt(i) == i) {
			sum += i;
			min = i;
		}
	}

	if (!sum) cout << -1 << endl;
	else cout << sum << '\n' << min << endl;
}
