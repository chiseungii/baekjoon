#include <iostream>
using namespace std;

long long pow(long long base, long long N) {
	long long result = 1;

	for (long long i = 0; i < N; i++)
		result *= base;

	return result;
}

int main() {
	long long N, r, c; cin >> N >> r >> c;

	long long size = pow(2, N);	// 판 사이즈

	long long left, right;	// 왼쪽, 오른쪽 열번호
	left = 0; right = size - 1;

	long long up, down;		// 위, 아래 행번호
	up = 0; down = size - 1;

	long long cnt = 0;
	for (; N > 0; N--) {
		// 위아래 중간지점
		long long mid_vertical = (up + down) / 2;

		// 윗부분일때
		if (r <= mid_vertical) {
			down = mid_vertical;
		}
		// 아랫부분일때
		else {
			up = mid_vertical + 1;
			cnt += pow(2, 2 * N - 1);
		}

		// 좌우 중간지점
		long long mid_horizon = (left + right) / 2;

		// 왼쪽부분일때
		if (c <= mid_horizon) {
			right = mid_horizon;
		}
		// 오른쪽부분일때
		else {
			left = mid_horizon + 1;
			cnt += pow(2, 2 * N - 2);
		}
	}

	cout << cnt << endl;
}
