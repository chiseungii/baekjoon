#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	string N_str = to_string(N);

	string make = "";
	for (int i = 0; i < N_str.length() - 1; i++)
		make += '1';
	make += '0';
	int cmp = atoi(make.c_str());

	if (N == 0) cout << 1 << endl;
	else if (N > cmp) cout << N_str.length() << endl;
	else cout << N_str.length() - 1 << endl;
}
