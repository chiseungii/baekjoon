#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	int a;
	while (scanf("%d", &a) != -1) {
		if (a % 6) cout << "N\n";
		else cout << "Y\n";
	}
}
