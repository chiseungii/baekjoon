#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string pal; cin >> pal;

	for (int i = 0; i <= (N - 1) / 2; i++) {
		int right_index = N - i - 1;
		if (pal[i] == '?' && pal[right_index] == '?')
			pal[i] = pal[right_index] = 'a';
		else if (pal[i] == '?')
			pal[i] = pal[right_index];
		else
			pal[right_index] = pal[i];
	}

	cout << pal << endl;
}
