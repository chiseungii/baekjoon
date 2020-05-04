#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int rest = 0;
	for (int i = 0; i < N; i++) {
		int student, apple; cin >> student >> apple;
		rest += (apple % student);
	}

	cout << rest << endl;
}
