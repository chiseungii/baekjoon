#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	int a;
	bool yes = true;

	int before = -1000001;
	while (scanf("%d", &a) != EOF) {
		if (a < before) yes = false;
		before = a;
	}

	if (yes) cout << "Good\n";
	else cout << "Bad\n";
}
