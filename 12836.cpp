#include <iostream>
using namespace std;

long long days[10001];

int main() {
	int N, Q; cin >> N >> Q;

	for (int i = 1; i <= N; i++)
		days[i] = 0;

	for (int i = 0; i < Q; i++) {
		int a, b, c; cin >> a >> b >> c;

		if (a == 1)
			days[b] += c;
		else {
			long long change = 0;
			for (int j = b; j <= c; j++)
				change += days[j];

			cout << change << endl;
		}
	}
}
