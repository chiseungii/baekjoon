#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	string S; cin >> S;

	for (int i = 0; i < M; i++) {
		string post; cin >> post;

		int index = 0;
		for (int j = 0; j < post.length(); j++) {
			if (post[j] == S[index]) {
				index++;
				if (index >= S.length())
					break;
			}
		}

		if (index >= S.length())
			cout << "true\n";
		else
			cout << "false\n";
	}
}
