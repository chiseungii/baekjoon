#include <iostream>
using namespace std;

// a's length >= b's length
void heejoo_sum(string a, string b) {
	int dis = a.length() - b.length();
	cout << a.substr(0, dis);

	for (int i = 0; i < b.length(); i++) {
		int anum = a[i + dis] - '0';
		int bnum = b[i] - '0';
		cout << anum + bnum;
	}

	cout << endl;
}

int main() {
	string a, b; cin >> a >> b;

	if (a.length() >= b.length())
		heejoo_sum(a, b);
	else
		heejoo_sum(b, a);
}
