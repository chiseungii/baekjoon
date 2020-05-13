#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int sum = 0;
	for (int i = 2; i <= N - 2; i += 2)
		sum += (N - i - 2) / 2;

	cout << sum << endl;
}
