#include <iostream>
using namespace std;

const int M = 1234567891;
const int R = 31;

int main() {
	int L; cin >> L;
	string s; cin >> s;

	long long hash = 0;
	long long r = 1;
	for (int i = 0; i < s.length(); i++) {
		int a = s[i] - 'a' + 1;
		hash += a * r % M;

		r *= R;
		r %= M;
	}

	cout << hash % M << endl;
}
