#include <iostream>
#include <string>
using namespace std;

int main() {
	double score[4][3] = { {4.3, 4.0, 3.7}, {3.3, 3.0, 2.7}, {2.3, 2.0, 1.7}, {1.3, 1.0, 0.7} };
	string grade; cin >> grade;

	if (grade == "F")
		cout << "0.0" << endl;
	else {
		int i, j;
		switch (grade[0]) {
		case 'A':
			i = 0;
			break;
		case 'B':
			i = 1;
			break;
		case 'C':
			i = 2;
			break;
		case 'D':
			i = 3;
			break;
		default:
			i = 4;
		}
		switch (grade[1]) {
		case '+':
			j = 0;
			break;
		case '0':
			j = 1;
			break;
		default:
			j = 2;
		}

		cout << fixed;
		cout.precision(1);
		cout << score[i][j] << endl;
	}
}
