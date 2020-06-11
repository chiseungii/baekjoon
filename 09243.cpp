#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string before, after;
	cin >> before >> after;

	bool wrong = false;
	// 홀수면 반대로
	if (N % 2) {
		for (int i = 0; i < before.length(); i++) {
			if (before[i] == after[i]) {
				cout << "Deletion failed\n";
				wrong = true;
				break;
			}
		}
	}
	// 짝수면 그대로
	else {
		for (int i = 0; i < before.length(); i++) {
			if (before[i] != after[i]) {
				cout << "Deletion failed\n";
				wrong = true;
				break;
			}
		}
	}

	if (!wrong) cout << "Deletion succeeded\n";
}
