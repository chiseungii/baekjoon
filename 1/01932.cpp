#include <iostream>
#include <algorithm>
using namespace std;

int triangle[500][500];
int n;

void DP() {
	for (int i = 1; i < n; i++) {
		triangle[i][0] += triangle[i - 1][0];
		triangle[i][i] += triangle[i - 1][i - 1];
		for (int j = 1; j < i; j++)
			triangle[i][j] += max(triangle[i - 1][j], triangle[i - 1][j - 1]);
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			cin >> triangle[i][j];

	DP();
	int max = triangle[n - 1][0];
	for (int i = 1; i < n; i++)
		if (triangle[n - 1][i] > max)
			max = triangle[n - 1][i];

	cout << max << endl;
}
