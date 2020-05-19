#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int cnt = 0;
	for (int i = 3; i <= n - 6; i += 3)
		for (int j = 3; j <= n - i - 3; j += 3)
				cnt++;

	cout << cnt << endl;
}
