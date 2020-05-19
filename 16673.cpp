#include <iostream>
using namespace std;

int main() {
	int C, K, P; cin >> C >> K >> P;

	int wine = 0;
	for (int i = 1; i <= C; i++)
		wine += (K * i + P * i * i);

	cout << wine << endl;
}
