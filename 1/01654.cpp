#include <iostream>
#include <algorithm>
using namespace std;

long long upperBound(long long* lines, long long max_length, int size, int N) {
	long long mid;
	long long left = 1;
	long long right = max_length;

	while (right > left) {
		mid = (left + right) / 2;

		int cnt = 0;
		for (int i = 0; i < size; i++)
			cnt += lines[i] / mid;

		if (N > cnt) right = mid;
		else left = mid + 1;
	}

	return right == max_length ? right : right - 1;
}

int main() {
	int K; cin >> K;	// 이미 가지고 있는 랜선의 개수
	int N; cin >> N;	// 필요한 랜선의 개수

	long long* lines = new long long[K];	// 랜선 길이
	long long max_length = 0;				// 제일 짧은 길이
	
	for (int i = 0; i < K; i++) {
		long long line; cin >> line;
		lines[i] = line;

		if (line > max_length) max_length = line;
	}

	cout << upperBound(lines, max_length, K, N) << endl;
}
