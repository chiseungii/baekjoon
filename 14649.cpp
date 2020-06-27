#include <iostream>
#include <vector>
using namespace std;

#define BLUE 0
#define RED 1
#define GREEN 2

int bridges[101];

class Son {
	int position;
	char direct;

public:
	Son(int s, char d) {
		position = s;
		direct = d;
	}
	void move() {
		if (direct == 'R') {
			position++;
			if (position > 100) return;
		}
		else {
			position--;
			if (position < 1) return;
		}

		bridges[position]++;
		bridges[position] %= 3;
	}
	bool isFinish() {
		if (position > 100 || position < 1)
			return true;
		else return false;
	}
};

int main() {
	int P; cin >> P;
	int N; cin >> N;

	vector<Son> S;
	for (int i = 0; i < N; i++) {
		int p; char d;
		cin >> p >> d;

		S.push_back(Son(p, d));
	}

	while (1) {
		bool allFinish = true;
		for (int i = 0; i < S.size(); i++) {
			if (!S[i].isFinish()) {
				allFinish = false;
				S[i].move();
			}
		}

		if (allFinish) break;
	}

	int blue = 0, red = 0, green = 0;
	for (int i = 1; i < 101; i++) {
		if (bridges[i] == BLUE) blue++;
		else if (bridges[i] == RED) red++;
		else green++;
	}

	double son1, son2, son3;
	son1 = (double)P / 100 * blue;
	son2 = (double)P / 100 * red;
	son3 = (double)P / 100 * green;

	cout << fixed;
	cout.precision(2);
	cout << son1 << '\n' << son2 << '\n' << son3 << '\n';
}
