#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int b; char ops;
	while (1) {
		cin >> ops;
		if (ops == '=') break;

		cin >> b;
		switch (ops) {
		case '+':
			a += b;
			break;
		case '-':
			a -= b;
			break;
		case '*':
			a *= b;
			break;
		case '/':
			a /= b;
			break;
		}
	}

	cout << a << endl;
}
