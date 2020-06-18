#include <iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;

	if (n * m % 3) cout << "NO\n";
	else cout << "YES\n";
}
