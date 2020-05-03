	#include <iostream>
	using namespace std;

	int main() {
		int P; cin >> P;

		int N;
		double D, A, B, F;
		for (int i = 0; i < P; i++) {
			cin >> N >> D >> A >> B >> F;

			double time = D / (A + B);
			cout << fixed;
			cout.precision(6);
			cout << N << ' ' << F * time << endl;
		}
	}
