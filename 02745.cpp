#include <iostream>
using namespace std;

int main() {
	string N; int B;
	cin >> N >> B;

	int result = 0, ten = 1;
	for (int i = N.length() - 1; i >= 0; i--) {
		if (N[i] >= 'A')
			result += ten * (N[i] - 'A' + 10);
		else
			result += ten * (N[i] - '0');

		ten *= B;
	}

	cout << result << endl;
}
