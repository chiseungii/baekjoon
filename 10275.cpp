#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		long long a, b; cin >> n >> a >> b;
		long long gold = pow(2, n);

		int day = 0;
		long long a_gold = 0, b_gold = gold;
		while (1) {
			day++;
			long long half = b_gold / 2;
			if (a_gold + half <= a) a_gold += half;
			b_gold /= 2;

			if (a_gold == a) break;
		}

		cout << day << endl;
	}
}
