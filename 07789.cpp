#include <iostream>
using namespace std;

bool isPrime(int n) {
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0) cnt++;

	return cnt == 2;
}

int main() {
	int n1, n2; cin >> n1 >> n2;

	if (isPrime(n1) && isPrime(n2 * 1000000 + n1))
		cout << "Yes\n";
	else
		cout << "No\n";
}
