#include <iostream>
using namespace std;

int main() {
	int pibonacchi[46];
	pibonacchi[0] = 0; pibonacchi[1] = 1;

	int n; cin >> n;
	for (int i = 2; i <= n; i++)
		pibonacchi[i] = pibonacchi[i - 1] + pibonacchi[i - 2];

	cout << pibonacchi[n] << '\n';
}
