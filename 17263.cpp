#include <iostream>
#include <algorithm>
using namespace std;

int A[500000];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	sort(A, A + N);
	cout << A[N - 1] << endl;
}
