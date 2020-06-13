#include <iostream>
#include <vector>
using namespace std;

int baskets[101];

int main() {
	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++)
		baskets[i] = i;

	for (int i = 0; i < M; i++) {
		int I, J, K; cin >> I >> J >> K;

		vector<int> tmp;
		for (int j = I; j < K; j++)
			tmp.push_back(baskets[j]);

		int dis = K - I; int index;
		for (index = K; index <= J; index++)
			baskets[index - dis] = baskets[index];

		int tmp_index = 0; index -= dis;
		for (; index <= J; index++, tmp_index++)
			baskets[index] = tmp[tmp_index];
	}

	for (int i = 1; i <= N; i++)
		cout << baskets[i] << ' ';
	cout << endl;
}
