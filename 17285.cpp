#include <iostream>
using namespace std;

int main() {
	string T; cin >> T;

	int key = (int)T[0] ^ (int)'C';
	for (int i = 0; i < T.length(); i++)
		T[i] ^= key;

	cout << T << endl;
}
