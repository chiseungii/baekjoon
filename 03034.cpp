#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, W, H; cin >> N >> W >> H;

	for (int i = 0; i < N; i++) {
		int length; cin >> length;

		if (length <= W) cout << "DA\n";
		else if (length <= H) cout << "DA\n";
		else if (length <= sqrt(pow(W, 2) + pow(H, 2))) cout << "DA\n";
		else cout << "NE\n";
	}
}
