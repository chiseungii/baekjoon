/*
브루트포스 알고리즘
*/

#include <iostream>
using namespace std;

int blocks[500][500];	// 땅
int N, M, B;

void brute_force(int max_height) {
	int min_sec = 1e8;	// 최소 시간
	int res_height = 0;	// 그때의 높이

	for(int i=max_height; i>=0; i--) {
		int pull = 0;	// 빼낸 블록
		int push = 0;	// 넣어야 할 블록

		for(int j=0; j<N; j++) {
			for(int k=0; k<M; k++) {
				if (blocks[j][k] > i)
					pull += blocks[j][k] - i;
				else push += i - blocks[j][k];
			}
		}

		// 다 넣을 수 있으면
		if (pull + B >= push) {
			int sec = pull * 2 + push;
			if (sec < min_sec) {
				min_sec = sec;
				res_height = i;
			}
		}
	}

	cout << min_sec << ' ' << res_height << endl;
}

int main() {
	cin >> N >> M;	// N x M
	cin >> B;		// 인벤토리 속 블록 개수

	int max_height = 0;			// 최대 높이
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int n; cin >> n;
			blocks[i][j] = n;
			if (n > max_height) max_height = n;
		}
	}

	brute_force(max_height);
}
