#include <iostream>
using namespace std;

string itos(int n) {
	string result = "";
	while (n > 0) {
		result = (char)(n % 10 + '0') + result;
		n /= 10;
	}

	return result;
}

int main() {
	int N, M; cin >> N >> M;
	string s = itos(N);

	int len = s.length();
	if (len * N <= M) {
		for (int i = 0; i < N; i++)
			cout << N;
		cout << endl;
	}
	else {
		for (int i = 0; i < M / len; i++)
			cout << N;
		for (int i = 0; i < M % len; i++)
			cout << s[i];
		cout << endl;
	}
}
