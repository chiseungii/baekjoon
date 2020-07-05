#include <iostream>
using namespace std;

int ice[200000];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> ice[i];

	int index = 0;
	int min_left = 1000000001;
	for (; ice[index] != -1; index++)
		if (ice[index] < min_left)
			min_left = ice[index];

	int min_right = 1000000001;
	for (index++; index < N; index++)
		if (ice[index] < min_right)
			min_right = ice[index];

	cout << min_left + min_right << endl;
}
