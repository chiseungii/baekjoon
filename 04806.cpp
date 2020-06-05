#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int cnt = 0;
	char c;
	while (scanf("%c", &c) != EOF)
		if (c == '\n') cnt++;

	cout << cnt << endl;
}
