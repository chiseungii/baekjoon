#include <iostream>
using namespace std;

int length_num(int n) {
	int cnt = 0;
	for (; n > 0; cnt++, n /= 10);

	return cnt;
}

int main() {
	int N; cin >> N;

	// 한자리 수
	if (N < 10) cout << N << endl;
	else {
		// 자리수 계산
		int len = length_num(N);

		// 바로 아래 자리수 마지막 숫자 계산
		int last_num = 9, nine, before_nine = 9;
		for (int i = 2; i < len; i++) {
			// 자리수만큼 9 채우기
			int nine = 0;
			for (int j = 0; j < i; j++)
				nine = nine * 10 + 9;

			last_num += (nine - before_nine) * i;
			before_nine = nine;
		}

		// 마지막으로 N 계산
		last_num += (N - before_nine) * len;
		cout << last_num << endl;
	}
}
