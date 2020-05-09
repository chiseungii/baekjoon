#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int A, B, C;

	while (scanf("%d %d %d", &A, &B, &C) == 3) {
		if (B - A >= C - B) cout << B - A - 1 << endl;
		else cout << C - B - 1 << endl;
	}
}
