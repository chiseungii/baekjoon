#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	for (int tc = 0; tc < 3; tc++) {
		int N; cin >> N;
		vector<long long> inputs;

		for (int i = 0; i < N; i++) {
			long long a; cin >> a;
			if (a) inputs.push_back(a);
		}

		if (inputs.empty()) {
			cout << "0\n";
			continue;
		}

		sort(inputs.begin(), inputs.end());

		// 무조건 마이너스
		if (inputs.back() < 0) cout << "-\n";
		// 무조건 플러스
		else if (inputs.front() > 0) cout << "+\n";
		else {
			int minus_index = 0;
			int plus_index = inputs.size() - 1;

			long long result = 0;
			while (inputs[minus_index] < 0 && inputs[plus_index]>0) {
				if (result == 0) {
					result += inputs[plus_index--];
					result += inputs[minus_index++];
				}
				else if (result > 0) result += inputs[minus_index++];
				else result += inputs[plus_index--];
			}

			// 다 썼을 때
			if (minus_index > plus_index) {
				if (result == 0) cout << "0\n";
				else if (result > 0) cout << "+\n";
				else cout << "-\n";
			}
			else {
				// 플러스만 남음
				if (inputs[minus_index] > 0) {
					if (result > 0) cout << "+\n";
					else {
						while (inputs[plus_index] > 0) {
							result += inputs[plus_index--];
							if (result > 0) {
								cout << "+\n";
								break;
							}
						}
						if (result == 0) cout << "0\n";
						else if (result < 0) cout << "-\n";
					}
				}
				// 마이너스만 남음
				else if (inputs[plus_index] < 0) {
					if (result < 0) cout << "-\n";
					else {
						while (inputs[minus_index] < 0) {
							result += inputs[minus_index++];
							if (result < 0) {
								cout << "-\n";
								break;
							}
						}
						if (result == 0) cout << "0\n";
						else if (result > 0) cout << "+\n";
					}
				}
			}
		}
	}
}
