#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	
	for (int i = 0; i < T; i++) {
		int a, b; char c;
		
		cin >> c;
		a = c - '0';

		cin >> c;

		cin >> c;
		b = c - '0';

		cout << a + b << endl;
	}
}
