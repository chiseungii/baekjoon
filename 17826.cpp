#include <iostream>
using namespace std;

int main() {
	int scores[50];
	for (int i = 0; i < 50; i++)
		cin >> scores[i];
	int hongik; cin >> hongik;

	int rank;
	for (int i = 0; i < 50; i++) {
		if (scores[i] == hongik) {
			rank = i + 1;
			break;
		}
	}

	if (rank <= 5) cout << "A+\n";
	else if (rank <= 15) cout << "A0\n";
	else if (rank <= 30) cout << "B+\n";
	else if (rank <= 35) cout << "B0\n";
	else if (rank <= 45) cout << "C+\n";
	else if (rank <= 48) cout << "C0\n";
	else cout << "F\n";
}
