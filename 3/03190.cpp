#include <iostream>
#include <vector>
using namespace std;

#define BLANK 0	// 비어있음
#define SNAKE 1 // 뱀만 있음
#define APPLE 2 // 사과 있음

int di[4] = { 0, 1, 0, -1 };
int dj[4] = { 1, 0, -1, 0 };
int direction = 0;	// 오른쪽부터 시계방향, 우-하-좌-상

pair<int, int> board[101][101];	// <정보, 방향>

int main() {
	int N; cin >> N;	// 보드의 크기
	int K; cin >> K;	// 사과의 개수

	// 보드 초기화
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			board[i][j].first = BLANK;
		}
	}

	// 사과 입력
	for (int i = 0; i < K; i++) {
		int a, b; cin >> a >> b;
		board[a][b].first = APPLE;
	}

	// 초기 뱀
	board[1][1].first = SNAKE;
	board[1][1].second = 0;

	int L; cin >> L;	// 방향 변환 횟수
	vector<pair<int, char>> changes;	// <시간, 방향>

	for (int i = 0; i < L; i++) {
		int X; char C;
		cin >> X >> C;
		changes.push_back(make_pair(X, C));
	}

	int snakeLen = 1;	// 뱀 길이
	int tail_i = 1, tail_j = 1;	// 꼬리 위치
	int head_i = 1, head_j = 1;	// 머리 위치
	int changeIndex = 0;	// changes 벡터 인덱스
	int sec = 0;	// 진행 시간(초)

	while (1) {
		// 방향 바꿀 때 됐는지 체크
		if (changeIndex < changes.size() && sec == changes[changeIndex].first) {
			if (changes[changeIndex].second == 'L') direction += 3;
			else direction++;
			direction %= 4;

			changeIndex++;
		}
		// 방향 입력
		board[head_i][head_j].second = direction;

		// 머리 갈 곳 구하기
		head_i += di[direction];
		head_j += dj[direction];

		// 게임오버 체크
		// 벽에 부딪힌 상황
		if (head_i<1 || head_i>N || head_j<1 || head_j>N) break;
		// 자기 몸에 부딪힌 상황
		else if (board[head_i][head_j].first == SNAKE) break;

		// 사과 없으면 꼬리 한 칸 이동
		if (board[head_i][head_j].first == BLANK) {
			int tailDir = board[tail_i][tail_j].second;
			board[tail_i][tail_j].first = BLANK;
			
			tail_i += di[tailDir];
			tail_j += dj[tailDir];
		}
		// 머리 이동
		board[head_i][head_j].first = SNAKE;

		// 시간 카운트
		sec++;
	}

	cout << sec + 1 << endl;
}
