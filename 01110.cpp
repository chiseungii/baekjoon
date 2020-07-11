#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int before = N;
	int cycle = 0;
	while (1) {
		cycle++;

		int tmp = before % 10 + before / 10;
		int after = before % 10 * 10 + tmp % 10;

		if (after == N) break;
		before = after;
	}

	cout << cycle << endl;
}
