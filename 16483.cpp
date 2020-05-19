#include <iostream>
using namespace std;

int main() {
	double T; cin >> T;

	double result = (T * T) / 4;
	result += 0.5;

	cout << (int)result << endl;
}
