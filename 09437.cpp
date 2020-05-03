	#include <iostream>
	using namespace std;

	int main() {
		int page[4];
		while (1) {
			int N, P; cin >> N;
			if (!N) break;
			cin >> P;

			int distance;
			if (P > N / 2)
				distance = N - P + 1;
			else
				distance = P;

			if (distance % 2) {
				page[0] = distance;
				page[1] = distance + 1;
				page[2] = N - distance;
				page[3] = page[2] + 1;
			}
			else {
				page[0] = distance - 1;
				page[1] = distance;
				page[2] = N - distance + 1;
				page[3] = page[2] + 1;
			}

			for (int i = 0; i < 4; i++)
				if (page[i] != P)
					cout << page[i] << ' ';
			cout << endl;
		}
	}
