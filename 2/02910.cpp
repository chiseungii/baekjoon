#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Number {
public:
	int num;	// 숫자
	int bindo;	// 빈도
	int idx;	// 처음 들어온 인덱스

	Number(int num, int bindo, int idx) {
		this->num = num;
		this->bindo = bindo;
		this->idx = idx;
	}
};

bool compare(Number n1, Number n2) {
	if (n1.bindo == n2.bindo)
		return n1.idx < n2.idx;
	else return n1.bindo > n2.bindo;
}

int main() {
	int N, C;	cin >> N >> C;
	// 메시지 길이 N, 숫자 최대값 C

	vector<Number> nums;	// 숫자들

	for (int i = 0; i < N; i++) {
		int n; cin >> n;

		bool isIn = false;
		for (int j = 0; j < nums.size(); j++) {
			if (nums[j].num == n) {
				isIn = true;
				nums[j].bindo++;
			}
		}

		if (!isIn) {
			nums.push_back(Number(n, 1, i));
		}
	}
	sort(nums.begin(), nums.end(), compare);

	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[i].bindo; j++) {
			cout << nums[i].num << ' ';
		}
	}
	cout << endl;
}
