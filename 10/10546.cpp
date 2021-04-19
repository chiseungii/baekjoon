#include <iostream>
#include <map>
using namespace std;

int main() {
	int N; cin >> N;	// 참가자 수
	map<string, int> people;	// <이름, 참가여부>

	for (int i = 0; i < N; i++) {
		string name; cin >> name;
		people[name]++;
	}

	for (int i = 0; i < N - 1; i++) {
		string name; cin >> name;
		people[name]--;
	}

	map<string, int>::iterator it;

	for (it = people.begin(); it != people.end(); it++) {
		if (it->second != 0) {
			cout << it->first << endl;
			break;
		}
	}
}
