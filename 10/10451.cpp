#include <iostream>
#include <vector>
using namespace std;

int sequence[1001];		// input
char check[1001];		// 방문 체크

int N;

bool DFS(int a) {
	if (sequence[a] == a) {
		check[a] = 1;
		return true;
	}

	vector<int> D;
	D.push_back(a);
	check[a] = 1;

	while (1) {
		int tmp = D.back();

		bool cycle = false;
		for (int i = 0; i < D.size(); i++) {
			if (D[i] == sequence[tmp]) {
				cycle = true;
				break;
			}
		}
		if (cycle) return true;

		if (!check[sequence[tmp]]) {
			D.push_back(sequence[tmp]);
			check[sequence[tmp]] = 1;
		}
	}

	return false;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// input
		cin >> N;
		for (int i = 1; i <= N; i++)
			cin >> sequence[i];

		// init
		for (int i = 1; i <= N; i++)
			check[i] = 0;

		// DFS
		int cycle_cnt = 0;
		for (int i = 1; i <= N; i++) {
			if (!check[i]) {
				cycle_cnt += DFS(i);
			}
		}

		// print
		cout << cycle_cnt << endl;
	}
}
