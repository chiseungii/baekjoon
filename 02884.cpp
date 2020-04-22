#include <iostream>
using namespace std;

int main() {
	int H, M; cin >> H >> M;

	if (M >= 45)
		M -= 45;
	else {
		H--;
		M += 15;
	}

	if (H < 0) H += 24;

	cout << H << ' ' << M << endl;
}
