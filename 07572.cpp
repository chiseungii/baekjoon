#include <iostream>
using namespace std;

int main() {
	char twelve[12] = { 'L', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K' };
	int N; cin >> N;

	if (N == 3) cout << "L9\n";
	else if (N == 2) cout << "K8\n";
	else if (N == 1) cout << "J7\n";
	else {
		N -= 3;
		N %= 60;
		if (N == 0) N = 60;

		int ten = N % 10;
		if (ten == 0) ten = 10;
		ten--;

		cout << twelve[N % 12] << ten << endl;
	}
}
