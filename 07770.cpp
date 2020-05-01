#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int stair = 1, blocks = 1, plus_block = 1, base = 4;
	while (n > blocks) {
		stair++;
		blocks += (plus_block + base);
		plus_block += base;
		base += 4;
	}

	if (n == blocks) cout << stair << endl;
	else cout << stair - 1 << endl;
}
