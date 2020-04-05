#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int plug = 1;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;

		plug--;
		plug += a;
	}

	cout << plug << endl;
}
