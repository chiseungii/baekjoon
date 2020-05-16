#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	if (n == 1) cout << -19 << endl;
	else {
		long long sum = n + 1;
		for (int i = 2; i < n; i++)
			if (n % i == 0) sum += i;

		long long result = sum * 5 - 24;
		cout << result << endl;
	}
}
