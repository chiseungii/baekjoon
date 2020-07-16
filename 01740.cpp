#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long N; cin >> N;

	vector<int> two;
	while (N > 0) {
		two.push_back(N % 2);
		N /= 2;
	}

	long long result = 0;
	long long base = 1;
	for (int i = 0; i < two.size(); i++) {
		result += base * two[i];
		base *= 3;
	}

	cout << result << endl;
}
