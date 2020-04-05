#include <iostream>
using namespace std;

int main() {
	long long N; cin >> N;
	long long dot = (3 * N * N + 5 * N + 2) / 2;
	cout << dot % 45678 << endl;
}
