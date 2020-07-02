#include <iostream>
using namespace std;

void swap(char& a, char& b) {
	char tmp = a;
	a = b;
	b = tmp;
}

int main() {
	string S; cin >> S;
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int A, B; cin >> A >> B;
		swap(S[A], S[B]);
	}

	cout << S << endl;
}
