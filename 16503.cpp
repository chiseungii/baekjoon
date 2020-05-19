#include <iostream>
#include <cmath>
using namespace std;

int cal(int a, int b, char op) {
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		if (a * b < 0) {
			a = abs(a);
			b = abs(b);
			return -(a / b);
		}
		else return a / b;
	}
}

int main() {
	int K1, K2, K3;
	char op1, op2;
	cin >> K1 >> op1 >> K2 >> op2 >> K3;

	int tmp = cal(K1, K2, op1);
	int result1 = cal(tmp, K3, op2);
	tmp = cal(K2, K3, op2);
	int result2 = cal(K1, tmp, op1);

	if (result1 < result2)
		cout << result1 << '\n' << result2 << '\n';
	else
		cout << result2 << '\n' << result1 << '\n';
}
