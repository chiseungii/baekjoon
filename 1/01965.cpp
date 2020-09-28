#include <iostream>
#include <algorithm>
using namespace std;

int boxes[1000];
int DP[1000];

int main() {
	// input
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> boxes[i];

	// LIS
	for (int i = 0; i < n; i++) {
		int max_DP = -1; DP[i] = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (boxes[j]<boxes[i] && DP[j]>max_DP) {
				max_DP = DP[j];
				DP[i] = DP[j] + 1;
			}
		}
	}

	// print
	cout << *max_element(DP, DP + n) << endl;
}
