#include <iostream>
using namespace std;

int students[101];

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int N, M; cin >> N >> M;

	for (int i = 1; i <= N; i++)
		cin >> students[i];

	for (int i = 1; i <= M; i++) {
		for (int j = 2; j <= N; j++)
			if (students[j - 1] % i > students[j] % i)
				swap(students[j - 1], students[j]);
	}

	for (int i = 1; i <= N; i++)
		cout << students[i] << endl;
}
