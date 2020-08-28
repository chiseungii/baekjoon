#include <iostream>
#include <queue>
using namespace std;

int tomato[100][100][100];	// input
// int day[100][100][100];		// 일 수 카운트
char check[100][100][100];	// 방문 체크용

int di[6] = { 1, 0, -1, 0, 0, 0 };
int dj[6] = { 0, 1, 0, -1, 0, 0 };
int dk[6] = { 0, 0, 0, 0, 1, -1 };

int N, M, H;

class Loc {
	int i, j, k;

public:
	Loc(int i, int j, int k) {
		this->i = i;
		this->j = j;
		this->k = k;
	}
	int getI() { return i; }
	int getJ() { return j; }
	int getK() { return k; }
};

int main() {
	cin >> M >> N >> H;

	// input
	for (int i = H - 1; i >= 0; i--)
		for (int j = 0; j < N; j++)
			for (int k = 0; k < M; k++)
				cin >> tomato[i][j][k];

	// 익은 토마토 모두 큐에 넣기
	queue<Loc> B;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (tomato[i][j][k] == 1) {
					B.push(Loc(i, j, k));
					// day[i][j][k] = 0;
					check[i][j][k] = 1;
				}
			}
		}
	}

	// BFS
	while (!B.empty()) {
		Loc tmp = B.front();
		B.pop();

		for (int i = 0; i < 6; i++) {
			int move_i = tmp.getI() + di[i];
			int move_j = tmp.getJ() + dj[i];
			int move_k = tmp.getK() + dk[i];

			if (move_i < 0 || move_i >= H) { continue; }
			else if (move_j < 0 || move_j >= N) { continue; }
			else if (move_k < 0 || move_k >= M) { continue; }
			else if (!tomato[move_i][move_j][move_k] && !check[move_i][move_j][move_k]) {
				B.push(Loc(move_i, move_j, move_k));
				tomato[move_i][move_j][move_k] = tomato[tmp.getI()][tmp.getJ()][tmp.getK()] + 1;
				check[move_i][move_j][move_k] = 1;
			}
		}
	}

	// count day
	int max_day = 0;
	bool impossible = false;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (tomato[i][j][k] == 0) {
					impossible = true;
					break;
				}
				else if (tomato[i][j][k] > max_day)
					max_day = tomato[i][j][k];
			}

			if (impossible) break;
		}

		if (impossible) break;
	}

	if (impossible) cout << -1 << endl;
	else cout << max_day - 1 << endl;
}
