#include <iostream>
using namespace std;

int rec[10001];

int cnt(int n) {
	int start = 1, end = n;
	int cnt = 0;
	while (1) {
		if (start > end) break;

		if (n % start == 0) {
			cnt++;
			end = n / start - 1;
		}
		start++;
	}

	return cnt;
}

int main() {
	int n; cin >> n;

	rec[1] = 1;
	for (int i = 2; i <= n; i++)
		rec[i] = rec[i - 1] + cnt(i);

	cout << rec[n] << endl;
}
