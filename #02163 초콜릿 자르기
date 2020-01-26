#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int chocolate[301][301];

void DP() {
	chocolate[1][1] = 0;
	for (int i = 2; i <= M; i++)
		chocolate[1][i] = i - 1;
	for (int i = 2; i <= N; i++)
		chocolate[i][1] = i - 1;

	for(int i=2;i<=N;i++)
		for (int j = 2; j <= M; j++) {
			if (j % 2 == 0)
				chocolate[i][j] = chocolate[i][j / 2] * 2 + 1;
			else chocolate[i][j] = chocolate[i][j / 2] + chocolate[i][j / 2 + 1] + 1;
		}
}

int main() {
	cin >> N >> M;
	DP();
	cout << chocolate[N][M] << endl;
}
