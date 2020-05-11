#include <iostream>
using namespace std;

int main() {
	int A, B, N; cin >> A >> B >> N;

	for (int i = 1; i <= N; i++) {
		int len = (A + B) * i + A * (N - i);
		cout << len << ' ';
	}
	cout << endl;
}
