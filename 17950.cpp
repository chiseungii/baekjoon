#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
	int H, x; cin >> H >> x;

	long long sum, snowball;
	sum = 0; snowball = 1;
	for (int i = 0; i < H; i++) {
		int c; cin >> c;

		snowball *= x;
		snowball %= MOD;
		sum += snowball * c;
		sum %= MOD;
	}

	cout << sum % 1000000007 << endl;
}
