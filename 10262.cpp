#include <iostream>
using namespace std;

int main() {
	int gunnar[4], emma[4];
	for (int i = 0; i < 4; i++)
		cin >> gunnar[i];
	for (int i = 0; i < 4; i++)
		cin >> emma[i];

	int sum_gunnar = 0, sum_emma = 0;
	for (int i = 0; i < 4; i++) {
		sum_gunnar += gunnar[i];
		sum_emma += emma[i];
	}

	if (sum_gunnar == sum_emma)
		cout << "Tie\n";
	else if (sum_gunnar > sum_emma)
		cout << "Gunnar\n";
	else
		cout << "Emma\n";
}
