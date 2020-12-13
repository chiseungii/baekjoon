#include <iostream>
using namespace std;

char time[10000000];

int main() {
	int N, L, D; cin >> N >> L >> D;

	// 노래 듣는 시간 체크
	int index = 0;
	for (int i = 0; i < N; i++) {
		for (int j = index; j < index + L; j++)
			time[j] = 1;

		index += (L + 5);
	}

	// 전화벨 울리는 것 확인
	int ring = D;
	while (time[ring]) ring += D;

	cout << ring << endl;
}
