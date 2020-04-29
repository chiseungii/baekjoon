#include <iostream>
using namespace std;

void print_box(int n) {
	if (n == 1) {
		cout << "#\n";
		return;
	}

	for (int i = 0; i < n; i++)
		cout << '#';
	cout << endl;
	for (int i = 1; i < n - 1; i++) {
		cout << '#';
		for (int j = 1; j < n - 1; j++)
			cout << 'J';
		cout << "#\n";
	}
	for (int i = 0; i < n; i++)
		cout << '#';
	cout << endl;
}

int main() {
	int t; cin >> t;

	int n; cin >> n;
	print_box(n);
	for (int i = 1; i < t; i++) {
		cin >> n; cout << endl;
		print_box(n);
	}
}
