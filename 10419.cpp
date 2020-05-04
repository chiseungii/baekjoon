#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int d; cin >> d;

		int time = 1;
		while (time * time + time <= d) time++;
		cout << time - 1 << endl;
	}
}
