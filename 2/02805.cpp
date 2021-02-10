/*
upper bound
*/

#include <iostream>
using namespace std;

long long upperBound(long long* trees, long long max_height, int size, int M) {
	long long mid, left, right;
	left = 1; right = max_height;

	while (right > left) {
		mid = (left + right) / 2;

		// 가져갈 수 있는 나무 길이 계산
		long long height = 0;
		for (long long i = 0; i < size; i++) {
			long long tmp = trees[i] - mid;
			if (tmp > 0) height += tmp;
		}

		if (height < M) right = mid;
		else left = mid + 1;
	}

	return right - 1;
}

int main() {
	long long N; cin >> N;	// 나무의 수
	long long M; cin >> M;	// 가져가려는 나무의 길이

	long long* trees = new long long[N];	// 나무의 길이
	long long max_height = 0;				// 최대 나무 길이

	for(long long i=0; i<N; i++) {
		long long height; cin >> height;
		trees[i] = height;
		if (height > max_height) max_height = height;
	}

	cout << upperBound(trees, max_height, N, M);

	delete[] trees;
}
