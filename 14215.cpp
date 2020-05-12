#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int stick[3];
	for (int i = 0; i < 3; i++)
		cin >> stick[i];
	sort(stick, stick + 3);

	if (stick[0] + stick[1] <= stick[2])
		stick[2] = stick[0] + stick[1] - 1;

	cout << stick[0] + stick[1] + stick[2] << endl;
}
