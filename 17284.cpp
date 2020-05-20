#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, money = 5000;
	while (scanf("%d", &a) == 1) {
		if (a == 1)
			money -= 500;
		else if (a == 2)
			money -= 800;
		else
			money -= 1000;
	}

	cout << money << endl;
}
