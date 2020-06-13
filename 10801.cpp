#include <iostream>
using namespace std;

int main() {
	int A[10], B[10];
	for (int i = 0; i < 10; i++)
		cin >> A[i];
	for (int i = 0; i < 10; i++)
		cin >> B[i];

	int win_A = 0, win_B = 0;
	for (int i = 0; i < 10; i++) {
		if (A[i] > B[i]) win_A++;
		else if (A[i] < B[i]) win_B++;
	}

	if (win_A > win_B) cout << "A\n";
	else if (win_A < win_B) cout << "B\n";
	else cout << "D\n";
}
