#include <iostream>
#include <queue>
using namespace std;

int dot[100001];	// input
char check[100001];	// 방문 체크용

int main() {
	int N, K; cin >> N >> K;

	if (N == K) {
		cout << 0 << endl;
		return 0;
	}

	queue<int> BFS;
	BFS.push(N);
	check[N] = 1;
	while (!BFS.empty()) {
		int tmp = BFS.front();
		BFS.pop();

		// X-1
		if (tmp > 0 && !check[tmp - 1]) {
			if (tmp - 1 == K) {
				cout << dot[tmp] + 1 << endl;
				break;
			}

			BFS.push(tmp - 1);
			dot[tmp - 1] = dot[tmp] + 1;
			check[tmp - 1] = 1;
		}

		// X+1
		if (tmp < 100000 && !check[tmp + 1]) {
			if (tmp + 1 == K) {
				cout << dot[tmp] + 1 << endl;
				break;
			}

			BFS.push(tmp + 1);
			dot[tmp + 1] = dot[tmp] + 1;
			check[tmp + 1] = 1;
		}

		// 2*X
		if (2 * tmp <= 100000 && !check[2 * tmp]) {
			if (2 * tmp == K) {
				cout << dot[tmp] + 1 << endl;
				break;
			}

			BFS.push(2 * tmp);
			dot[2 * tmp] = dot[tmp] + 1;
			check[2 * tmp] = 1;
		}
	}
}
