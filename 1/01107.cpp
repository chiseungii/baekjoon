#include <iostream>
#include <cmath>
using namespace std;

char button[10];	// 버튼 고장여부
char plus_button = 1;
char minus_button = 1;

int cnt_click(int n) {
	if (n == 0) return button[0] ? 1 : -1;
	if (n < 0) return -1;

	int cnt = 0;

	while (n > 0) {
		if (!button[n % 10]) return -1;
		
		cnt++;
		n /= 10;
	}

	return cnt;
}

int main() {
	int N; cin >> N;	// 이동하려는 채널
	int M; cin >> M;	// 고장난 버튼의 수

	for (int i = 0; i < 10; i++) button[i] = 1;
	for (int i = 0; i < M; i++) {
		char ch; cin >> ch;

		if (ch == '+') plus_button = 0;
		else if (ch == '-') minus_button = 0;
		else button[ch - '0'] = 0;
	}

	int dist = 0;
	int min_click = 10e7;

	while (M < 10) {
		int down = N - dist;
		int up = N + dist;

		down = cnt_click(down);
		up = cnt_click(up);

		if (down == -1 && up == -1) dist++;
		else if (down == -1 || up == -1) {
			min_click = (down == -1) ? up : down;
			break;
		}
		else {
			min_click = (down < up) ? down : up;
			break;
		}
	}

	min_click += dist;
	int click_100 = abs(100 - N);

	cout << ((min_click < click_100) ? min_click : click_100) << endl;
}
