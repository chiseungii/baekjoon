#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N; cin >> N;

	int cnt = 1;
	for (int i = 2; i <= sqrt(N); i++)
		if (N % i == 0) cnt++;

	cnt *= 2;
	if ((int)sqrt(N) * (int)sqrt(N) == N) cnt--;

	cout << cnt << endl;
}
