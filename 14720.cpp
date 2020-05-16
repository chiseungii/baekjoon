#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int milk = 0, cnt = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;

		if (a == milk) {
			cnt++;
			milk = (milk + 1) % 3;
		}
	}

	cout << cnt << endl;
}
