#include <iostream>
using namespace std;

int main() {
	cout << "n e\n";
	cout << "- -----------\n";

	int n = 0, i_pac = 1;
	double e = 1;
	for (int i = 0; i < 10; i++) {
		if (n >= 3) {
			cout << fixed;
			cout.precision(9);
		}
		cout << n << ' ' << e << endl;

		n++;
		i_pac *= n;
		e += (1 / (double)i_pac);
	}
}
