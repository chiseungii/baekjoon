#include <iostream>
#include <map>
using namespace std;

int main() {
	int N; cin >> N;	// 팔린 책의 개수
	map<string, int> soldBooks;	// 팔린 책들

	for (int i = 0; i < N; i++) {
		string book; cin >> book;

		if (soldBooks.find(book) == soldBooks.end())
			soldBooks[book] = 1;
		else soldBooks[book]++;
	}

	string max_book;
	int max_cnt = 0;

	for (map<string, int>::iterator it = soldBooks.begin(); it != soldBooks.end(); it++) {
		if (it->second == max_cnt && it->first < max_book)
			max_book = it->first;
		else if (it->second > max_cnt) {
			max_book = it->first;
			max_cnt = it->second;
		}
	}

	cout << max_book << endl;
}
