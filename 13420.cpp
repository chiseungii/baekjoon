#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		long long a, b, c; char op, equal;
		cin >> a >> op >> b >> equal >> c;

		bool correct;
		switch (op) {
		case '+':
			if (a + b == c) correct = true;
			else correct = false;
			break;

		case '-':
			if (a - b == c) correct = true;
			else correct = false;
			break;

		case '*':
			if (a * b == c) correct = true;
			else correct = false;
			break;

		case '/':
			if (a / b == c) correct = true;
			else correct = false;
			break;
		}

		if (correct) cout << "correct\n";
		else cout << "wrong answer\n";
	}
}
