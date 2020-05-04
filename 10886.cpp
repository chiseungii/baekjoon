#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		sum += a;
	}

	if (sum > N / 2) cout << "Junhee is cute!\n";
	else cout << "Junhee is not cute!\n";
}
