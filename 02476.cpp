#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	int max_price = 0;
	for (int i = 0; i < N; i++) {
		int a, b, c; cin >> a >> b >> c;

		int price;
		if (a == b && a == c)
			price = 10000 + a * 1000;
		else if (a == b && a != c)
			price = 1000 + a * 100;
		else if (a == c && a != b)
			price = 1000 + a * 100;
		else if (b == c && a != b)
			price = 1000 + b * 100;
		else
			price = max(max(a, b), c) * 100;

		if (price > max_price) max_price = price;
	}

	cout << max_price << endl;
}
