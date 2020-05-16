#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int n = 1;
	while (1) {
		int an = (n * n - n + 2) / 2;
		if (an == N) break;
		if (an > N) {
			n--;
			break;
		}

		n++;
	}

	int a = n, b = 1;
	int an = (n * n - n + 2) / 2;
	int dis = N - an;
	a -= dis; b += dis;

	cout << a << ' ' << b << endl;
}
