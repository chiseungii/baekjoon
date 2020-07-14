#include <iostream>
using namespace std;

bool computers[101];

int main() {
	int N; cin >> N;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;

		if (computers[n]) cnt++;
		else computers[n] = true;
	}

	cout << cnt << endl;
}
