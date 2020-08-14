#include <iostream>
using namespace std;

char news[50][50];

int main() {
	int R, C, ZR, ZC; cin >> R >> C >> ZR >> ZC;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> news[i][j];

	for (int i = 0; i < R; i++) {
		for (int ii = 0; ii < ZR; ii++) {
			for (int j = 0; j < C; j++)
				for (int jj = 0; jj < ZC; jj++)
					cout << news[i][j];
			cout << endl;
		}
	}
}
