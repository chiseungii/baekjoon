#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string R[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet",
	"grey", "white" };
	string s1, s2, s3; cin >> s1 >> s2 >> s3;

	int index1, index2, index3;
	for (int i = 0; i < 10; i++) {
		if (R[i] == s1) index1 = i;
		if (R[i] == s2) index2 = i;
		if (R[i] == s3) index3 = i;
	}

	long long result = index1 * 10 + index2;
	result *= pow(10, index3);

	cout << result << endl;
}
