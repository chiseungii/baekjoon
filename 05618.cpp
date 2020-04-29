#include <iostream>
using namespace std;

void two_nums(int a, int b) {
	int min = a > b ? b : a;
	for (int i = 1; i <= min; i++)
		if (!(a % i) && !(b % i))
			cout << i << '\n';
}

void three_nums(int a, int b, int c) {
	int min = a > b ? b : a;
	min = min > c ? c : min;
	for (int i = 1; i <= min; i++)
		if (!(a % i) && !(b % i) && !(c % i))
			cout << i << '\n';
}

int main() {
	int n; cin >> n;

	if (n == 2) {
		int a, b; cin >> a >> b;
		two_nums(a, b);
	}
	else {
		int a, b, c; cin >> a >> b >> c;
		three_nums(a, b, c);
	}
}
