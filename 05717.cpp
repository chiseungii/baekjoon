#include <iostream>
using namespace std;

int main() {
	while (1) {
		int M, F; cin >> M >> F;
		if (!M && !F) break;

		cout << M + F << endl;
	}
}
