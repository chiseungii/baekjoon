#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	bool exist = false;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		if (s == "anj") exist = true;
	}

	if (exist) cout << "뭐야;\n";
	else cout << "뭐야?\n";
}
