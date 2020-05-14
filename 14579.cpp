#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;

	int sum = 0;
	for (int i = 1; i < a; i++)
		sum += i;
	int result = 1;
	for (int i = 0; i <= b - a; i++) {
		sum += (a + i);
		result *= sum;
		result %= 14579;
	}

	cout << result << endl;
}
