#include <iostream>
//#include <vector>
using namespace std;

int main() {
	int K; cin >> K;
	int N; cin >> N;

	int T[100]; char Z[100];
	for (int i = 0; i < N; i++)
		cin >> T[i] >> Z[i];

	int time = 210;
	for (int i = 0; i < N; i++) {
		if (T[i] >= time) break;

		time -= T[i];
		if (Z[i] == 'T')
			K = (K == 8) ? 1 : K + 1;
	}
	/*vector<pair<int, char>> quiz;
	int T; char Z;
	for (int i = 0; i < N; i++) {
		cin >> T >> Z;
		quiz.push_back(make_pair(T, Z));
	}

	int time = 210;
	vector<pair<int, char>>::iterator it;
	for (it = quiz.begin(); it != quiz.end(); it++) {
		if (it->first >= time) break;

		time -= it->first;
		if (it->second == 'T')
			K = (K == 8) ? 1 : K + 1;
	}
	for (int i = 0; i < N; i++) {
		if (quiz[i].first >= time) break;

		time -= quiz[i].first;
		if (quiz[i].second == 'T')
			K = (K == 8) ? 1 : K + 1;
	}*/

	cout << K << endl;
}
