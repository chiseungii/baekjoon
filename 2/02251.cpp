#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int basket[3];				// 물통 A, B, C
char check[201][201][201];	// 방문 체크

int max_liter[3];

vector<pair<int, int>> moves;
void init_moves() {
	moves.push_back(make_pair(0, 1));
	moves.push_back(make_pair(0, 2));
	moves.push_back(make_pair(1, 0));
	moves.push_back(make_pair(1, 2));
	moves.push_back(make_pair(2, 0));
	moves.push_back(make_pair(2, 1));
}

struct Liter {
	int liters[3];
	Liter(int a, int b, int c) {
		liters[0] = a;
		liters[1] = b;
		liters[2] = c;
	}
};

void move(int a, int b, int baskets[3]) {
	// a에서 b로 옮김

	baskets[b] += baskets[a];
	baskets[a] = 0;
	if (baskets[b] > max_liter[b]) {
		baskets[a] += baskets[b] - max_liter[b];
		baskets[b] = max_liter[b];
	}
}

int main() {
	// input
	for (int i = 0; i < 3; i++)
		cin >> max_liter[i];

	// init
	init_moves();

	// BFS
	vector<int> result;
	queue<Liter> B;
	B.push(Liter(0, 0, max_liter[2]));
	check[0][0][max_liter[2]] = 1;
	result.push_back(max_liter[2]);

	while (!B.empty()) {
		Liter tmp = B.front();
		B.pop();

		for (int i = 0; i < 6; i++) {
			int tmp_liters[3] = { tmp.liters[0],tmp.liters[1],tmp.liters[2] };
			pair<int, int> m = moves[i];
			move(m.first, m.second, tmp_liters);

			if (!check[tmp_liters[0]][tmp_liters[1]][tmp_liters[2]]) {
				B.push(Liter(tmp_liters[0], tmp_liters[1], tmp_liters[2]));
				check[tmp_liters[0]][tmp_liters[1]][tmp_liters[2]] = 1;

				if (tmp_liters[0] == 0) result.push_back(tmp_liters[2]);
			}
		}
	}

	// sort & print
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << ' ';
	cout << endl;
}
