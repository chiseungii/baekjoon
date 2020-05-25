#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int h, m, s; char cl;
	cin >> h >> cl >> m >> cl >> s;
	int current_S = h * 3600 + m * 60 + s;
	cin >> h >> cl >> m >> cl >> s;
	int start_S = h * 3600 + m * 60 + s;

	int result_S;
	if (current_S < start_S)
		result_S = start_S - current_S;
	else
		result_S = 86400 - (current_S - start_S);

	printf("%02d:%02d:%02d\n", result_S / 3600, result_S % 3600 / 60, result_S % 60);
}
