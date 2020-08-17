/* 첫번째 에러 해결 못 함 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	while (1) {
		string input; getline(cin, input);
		if (input == "") break;

		vector<string> dances;
		int index = 0;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == ' ') {
				dances.push_back(input.substr(index, i - index));
				index = i + 1;
			}
		}
		dances.push_back(input.substr(index));

		vector<int> errors;
		// error1 검사
		/*
		bool error_1 = true;
		for (int i = 0; i < dances.size(); i++) {
			if (dances[i] == "dip") {
				if (i == 0 && dances[i + 1] != "twirl") {
					error_1 = false;
					break;
				}
				if (i == 1 && (dances[i - 1] != "jiggle" && dances[i + 1] != "twirl")) {
					error_1 = false;
					break;
				}
				if (i == dances.size() - 1 && (dances[i - 1] != "jiggle" && dances[i - 2] != "jiggle")) {
					error_1 = false;
					break;
				}
			}
		}*/

		if (errors.size() == 0) {
			cout << "form ok: ";
			for (int i = 0; i < dances.size(); i++)
				cout << dances[i] << ' ';
			cout << endl;
		}
		else if (errors.size() == 1) {
			printf("form error %d: ", errors[0]);
			for (int i = 0; i < dances.size(); i++)
				cout << dances[i] << ' ';
			cout << endl;
		}
		else {
			printf("form errors %d", errors[0]);
			for (int i = 1; i < errors.size() - 1; i++)
				printf(", %d", errors[i]);
			printf(" and %d: ", errors.back());
			for (int i = 0; i < dances.size(); i++)
				cout << dances[i] << ' ';
			cout << endl;
		}
	}
}
