#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	if (N == 1) cout << "*\n";
	else {
		for (int i = 0; i < N - 1; i++)
			cout << ' ';
		cout << "*\n";

		int j = 1;
		for (int i = N - 2; i >= 0; i--) {
			for (int k = 0; k < i; k++)
				cout << ' ';
			cout << '*';
			for (int k = 0; k < j; k++)
				cout << ' ';
			cout << "*\n";

			j += 2;
		}
	}
}
