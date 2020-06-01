#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;

	vector<int> x, y;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		x.push_back(a);
		y.push_back(b);
	}

	int line = 0;

	// x 좌표 계산
	sort(x.begin(), x.end());
	int cnt = 1, num = x[0];
	for (int i = 1; i < x.size(); i++) {
		if (x[i] == num) cnt++;
		else {
			line += (cnt >= 2);
			cnt = 1;
			num = x[i];
		}
	}
	line += (cnt >= 2);

	// y 좌표 계산
	sort(y.begin(), y.end());
	cnt = 1, num = y[0];
	for (int i = 1; i < y.size(); i++) {
		if (y[i] == num) cnt++;
		else {
			line += (cnt >= 2);
			cnt = 1;
			num = y[i];
		}
	}
	line += (cnt >= 2);

	cout << line << endl;
}
