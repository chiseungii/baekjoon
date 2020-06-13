#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		if (i % 2) {
			for (int j = 0; j < N; j++)
				cout << ' ' << '*';
			cout << endl;
		}
		else {
			for (int j = 0; j < N; j++)
				cout << '*' << ' ';
			cout << endl;
		}
	}
}
