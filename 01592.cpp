#include <iostream>
using namespace std;

int* ball;

int main() {
	int N, M, L; cin >> N >> M >> L;

	ball = new int[N + 1];
	for (int i = 2; i <= N; i++)
		ball[i] = 0;
	ball[1] = 1;

	int cnt = 0, throw_n = 1;
	while (1) {
		if (ball[throw_n] == M) break;

		if (ball[throw_n] % 2) {
			cnt++;
			throw_n += L;
			if (throw_n > N) throw_n -= N;
			ball[throw_n]++;
		}
		else {
			cnt++;
			throw_n -= L;
			if (throw_n < 1) throw_n += N;
			ball[throw_n]++;
		}
	}

	cout << cnt << endl;
	delete[] ball;
}
