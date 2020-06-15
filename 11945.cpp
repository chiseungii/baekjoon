#include <iostream>
using namespace std;

char fish[10];

int main() {
	int N, M; cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> fish[j];

		for (int j = M - 1; j >= 0; j--)
			cout << fish[j];
		cout << endl;
	}
}
