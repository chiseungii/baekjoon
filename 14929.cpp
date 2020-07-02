#include <iostream>
using namespace std;

int x[100001];

int main() {
	int n; cin >> n;

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		sum += x[i];
	}

	long long result = 0;
	for (int i = 0; i < n - 1; i++) {
		sum -= x[i];
		result += sum * x[i];
	}

	cout << result << endl;
}
