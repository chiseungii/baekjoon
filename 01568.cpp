#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int sec = 0;
	while (N > 0) {
		int n = 1;
		while ((n * n + n) / 2 <= N) n++;
		n--;

		int an = (n * n + n) / 2;
		sec += n;
		N -= an;
	}

	cout << sec << endl;
}
