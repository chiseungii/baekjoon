#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N; cin >> N;

		double min_cost_per_weight = 100001.0;
		int min_cost = 100001;
		for (int j = 0; j < N; j++) {
			int W, C; cin >> W >> C;

			double cost = double(C) / double(W);
			if (min_cost_per_weight > cost) {
				min_cost_per_weight = cost;
				min_cost = C;
			}
			else if (min_cost_per_weight == cost)
				if (min_cost > C) min_cost = C;
		}

		cout << min_cost << endl;
	}
}
