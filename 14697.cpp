#include <iostream>
using namespace std;

int main() {
	int A, B, C, N;
	cin >> A >> B >> C >> N;

	int room1, room2, room3;
	for (int i = 0; i <= N; i++) {
		room1 = A * i;
		for (int j = 0; j <= N; j++) {
			room2 = B * j;
			for (int k = 0; k <= N; k++) {
				room3 = C * k;

				if (room1 + room2 + room3 == N) {
					cout << 1 << endl;
					return 0;
				}
			}
		}
	}

	cout << 0 << endl;
}
