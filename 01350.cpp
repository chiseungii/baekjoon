#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int* files = new int[N];
	for (int i = 0; i < N; i++)
		cin >> files[i];
	int cluster; cin >> cluster;

	long long cnt = 0;
	for (int i = 0; i < N; i++) {
		if (files[i] % cluster)
			cnt += files[i] / cluster + 1;
		else
			cnt += files[i] / cluster;
	}

	long long result = cnt * cluster;
	cout << result << endl;

	delete[] files;
}
