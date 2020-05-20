#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	int cnt = 0;
	while (N >= M) {
		cnt += N;
		N /= M;
	}
	cnt += N;

	cout << cnt << endl;
}
