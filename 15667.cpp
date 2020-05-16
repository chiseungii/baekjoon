#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N; cin >> N;

	int K = (sqrt(4 * N - 3) - 1) / 2;
	cout << K << endl;
}
