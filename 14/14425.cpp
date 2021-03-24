#include <iostream>
#include <map>
using namespace std;

int main() {
	int N; cin >> N;	// 집합 S의 원소 개수
	int M; cin >> M;	// M개의 문자열

	map<string, bool> S;	// 집합 S

	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		S[str] = true;
	}

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		string str; cin >> str;
		if (S[str]) cnt++;
	}

	cout << cnt << endl;
}
