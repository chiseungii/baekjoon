#include <iostream>
using namespace std;

long long classes[1000000];

int main() {
	long long N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> classes[i];
	long long B, C; cin >> B >> C;

	long long cnt = N;
	for (int i = 0; i < N; i++) {
		long long c = classes[i] - B;
		if (c < 0) c = 0;

		if (c) {
			if (c % C)
				cnt += c / C + 1;
			else
				cnt += c / C;
		}
	}

	cout << cnt << endl;
}
