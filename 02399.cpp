#include <iostream>
#include <cmath>
using namespace std;

int* x;

int main() {
	int n; cin >> n;

	x = new int[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];

	long long sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
				sum += abs(x[i] - x[j]);

	cout << sum << endl;

	delete[] x;
}
