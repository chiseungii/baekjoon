#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long X, Y, W, S;
	cin >> X >> Y >> W >> S;
	if (X < Y) {
		int tmp = X;
		X = Y;
		Y = tmp;
	}

	long long a, b, c;
	// 평행선으로만
	a = (X + Y) * W;

	// 대각선으로만
	long long mod = (X + Y) % 2;
	b = (X - mod) * S + mod * W;

	// 대각선으로 가다가 평행선으로
	c = Y * S + (X - Y) * W;

	cout << min(a, min(b, c)) << endl;
}
