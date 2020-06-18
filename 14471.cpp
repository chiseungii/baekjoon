#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	vector<int> costs;
	for (int i = 0; i < M; i++) {
		int A, B; cin >> A >> B;

		if (A >= N)
			costs.push_back(0);
		else
			costs.push_back(N - A);
	}
	sort(costs.begin(), costs.end());

	int sum = 0;
	for (int i = 0; i < costs.size() - 1; i++)
		sum += costs[i];

	cout << sum << endl;
}
