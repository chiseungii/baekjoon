#include <iostream>
using namespace std;

int main() {
	int start_H, start_M, end_H, end_M;
	cin >> start_H >> start_M >> end_H >> end_M;
	int N; cin >> N;

	int cnt = 0;
	while (1) {
		if (start_H % 10 == N || start_H / 10 == N ||
			start_M % 10 == N || start_M / 10 == N)
			cnt++;

		if (start_H == end_H && start_M == end_M)
			break;

		start_M++;
		if (start_M == 60) {
			start_M = 0;
			start_H++;
		}
	}

	cout << cnt << endl;
}
