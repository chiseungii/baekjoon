#include <iostream>
using namespace std;

int H, M;

void plusMin() {
	M++;
	if (M == 60) { H++; M = 0; }
	if (H == 24) H = 0;
}

int main() {
	int N; cin >> N;

	int price = 0;
	for (int j = 0; j < N; j++) {
		int D; char colon;
		cin >> H >> colon >> M >> D;

		for (int i = 0; i < D; i++) {
			if (H >= 7 && H < 19) price += 10;
			else price += 5;

			plusMin();
		}
	}

	cout << price << endl;
}
