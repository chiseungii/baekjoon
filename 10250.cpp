#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int H, W, N; cin >> H >> W >> N;

		int room = (N - 1) / H + 1;
		int stair = N % H;
		if (!stair) stair = H;
		cout << stair * 100 + room << endl;
	}
}
