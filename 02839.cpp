#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int five = N / 5;
	int rest = N - five * 5;
	bool complete = false;
	while (five) {
		rest = N - five * 5;
		if (rest % 3 == 0) {
			cout << five + rest / 3 << endl;
			complete = true;
			break;
		}

		five--;
	}

	if (!complete) {
		if (N % 3 == 0)
			cout << N / 3 << endl;
		else cout << -1 << endl;
	}
}
