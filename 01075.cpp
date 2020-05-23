#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int N, F; cin >> N >> F;

	int mod = N % F;
	int result = N % 100;
	if (result >= mod) result -= mod;
	else result = result + F - mod;
	result %= F;

	printf("%02d\n", result);
}
