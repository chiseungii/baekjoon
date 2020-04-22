#include <iostream>
using namespace std;

int main() {
	double seven_X, seven_Y; cin >> seven_X >> seven_Y;
	double min_cost = seven_X / seven_Y * 1000.;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		double X, Y; cin >> X >> Y;
		double cost = X / Y * 1000.;

		if (cost < min_cost) min_cost = cost;
	}

	cout << fixed;
	cout.precision(2);
	cout << min_cost << endl;
}
