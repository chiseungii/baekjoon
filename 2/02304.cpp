#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.first < p2.first;
}

int main() {
	int N; cin >> N;	// 기둥의 개수
	pair<int, int> bars[1000];	// <기둥 위치, 기둥 높이>

	int max_height = 0;	// 가장 높은 기둥

	for (int i = 0; i < N; i++) {
		int L, H; cin >> L >> H;
		bars[i].first = L;
		bars[i].second = H;

		if (H > max_height) max_height = H;
	}
	sort(bars, bars + N);

	int left_index = 0;	// 왼쪽 시작
	int right_index = N - 1;	// 오른쪽 시작

	int area = 0;	// 창고 넓이
	int max_tmp = 0;	// 중간 최고 높이

	// 왼쪽부터
	int left_local = 0;	// 왼쪽 위치
	while (1) {
		area += (bars[left_index].first - left_local) * max_tmp;
		left_local = bars[left_index].first;

		if (bars[left_index].second >= max_height) break;

		if (bars[left_index].second > max_tmp)
			max_tmp = bars[left_index].second;

		left_index++;
	}

	// 오른쪽부터
	max_tmp = 0;
	int right_local = bars[right_index].first + 1;
	while (1) {
		area += (right_local - bars[right_index].first - 1) * max_tmp;
		right_local = bars[right_index].first + 1;

		if (bars[right_index].second >= max_height) break;

		if (bars[right_index].second > max_tmp)
			max_tmp = bars[right_index].second;

		right_index--;
	}

	// 제일 높은 부분 플러스
	area += (right_local - left_local) * max_height;

	cout << area << endl;
}
