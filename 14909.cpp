#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int cnt = 0, n;
	while (scanf("%d", &n) != EOF)
		if (n > 0) cnt++;

	cout << cnt << endl;
}
