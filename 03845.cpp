#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	while (1) {
		int nx, ny;
		double w;
		cin >> nx >> ny >> w;

		if (!nx && !ny && w == 0.0)
			break;

		vector<double> x;
		for (int i = 0; i < nx; i++) {
			double xi; cin >> xi;
			x.push_back(xi);
		}
		sort(x.begin(), x.end());

		bool complete_x = true;
		double local = 0.0;
		for (int i = 0; i < x.size(); i++) {
			if (x[i] - w / 2 > local) complete_x = false;
			local = x[i] + w / 2;
		}
		if (local < 75.0) complete_x = false;

		vector<double> y;
		for (int i = 0; i < ny; i++) {
			double yi; cin >> yi;
			y.push_back(yi);
		}
		sort(y.begin(), y.end());

		bool complete_y = true;
		local = 0.0;
		for (int i = 0; i < y.size(); i++) {
			if (y[i] - w / 2 > local) complete_y = false;
			local = y[i] + w / 2;
		}
		if (local < 100.0) complete_y = false;

		if (complete_x && complete_y)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
