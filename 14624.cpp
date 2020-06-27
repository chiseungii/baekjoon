#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	if (N % 2) {
		for (int i = 0; i < N; i++)
			cout << '*';
		cout << endl;

		for (int i = 0; i < N / 2; i++)
			cout << ' ';
		cout << "*\n";

		for (int i = 1; i < N; i += 2) {
			for (int j = 0; j < (N - i - 2) / 2; j++)
				cout << ' ';
			cout << '*';
			for (int j = 0; j < i; j++)
				cout << ' ';
			cout << "*\n";
		}
	}
	else
		cout << "I LOVE CBNU\n";
}
