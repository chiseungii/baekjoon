#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N; cin >> N;

	int start_x, start_y;
	int before_x, before_y;
	cin >> start_x >> start_y;
	before_x = start_x;
	before_y = start_y;
	int distance = 0;
	for (int i = 0; i < N - 1; i++) {
		int x, y; cin >> x >> y;

		distance += sqrt(pow(x - before_x, 2) + pow(y - before_y, 2));
		before_x = x;
		before_y = y;
	}

	distance += sqrt(pow(start_x - before_x, 2) + pow(start_y - before_y, 2));
	cout << distance << endl;
}
