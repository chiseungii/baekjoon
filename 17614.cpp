#include <iostream>
using namespace std;

int clap[1000001];

int clap_num(int n) {
	int cnt = 0;
	while (n > 0) {
		int a = n % 10;
		if (a == 3 || a == 6 || a == 9)
			cnt++;
		n /= 10;
	}

	return cnt;
}

int main() {
	int N; cin >> N;

	clap[1] = 0;
	for (int i = 2; i <= N; i++)
		clap[i] = clap[i - 1] + clap_num(i);

	cout << clap[N] << endl;
}
