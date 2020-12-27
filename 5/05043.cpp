#include <iostream>
#include <cmath>
using namespace std;

long long bits[51];
int b;

void DP() {
	bits[0] = 1;
	for (int i = 1; i <= b; i++)
		bits[i] = bits[i - 1] + pow(2, i);
}

int main() {
	long long N; cin >> N >> b;

	DP();
	if (N <= bits[b]) cout << "yes\n";
	else cout << "no\n";
}
