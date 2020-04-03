// 생장점

#include <iostream>
using namespace std;

int main() {
	while (1) {
		int a; cin >> a;
		if (a == 0) break;

		int leaf = 1;
		for (int i = 0; i < a; i++) {
			int sf, br; cin >> sf >> br;
			leaf *= sf;
			leaf -= br;
		}

		cout << leaf << endl;
	}
}
