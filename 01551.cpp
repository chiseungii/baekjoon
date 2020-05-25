#include <iostream>
using namespace std;

int n[20];

int main() {
	int N, K; cin >> N >> K;
	char c;
	for (int i = 0; i < N - 1; i++)
		cin >> n[i] >> c;
	cin >> n[N - 1];

	for (int i = 0; i < K; i++, N--) {
		for (int j = 0; j < N - 1; j++)
			n[j] = n[j + 1] - n[j];
	}

	for (int i = 0; i < N - 1; i++)
		cout << n[i] << ',';
	cout << n[N - 1] << endl;
}
