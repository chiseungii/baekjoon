/*
STL의 binary_search() 이용
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
char str[21];	// 입력용

int main() {
	scanf("%d", &N);
	scanf("%d", &M);
	
	vector<string> ear;	// 듣도 못한 명단

	for(int i=0; i<N; i++) {
		scanf("%s", str);
		string name = str;
		ear.push_back(name);
	}
	sort(ear.begin(), ear.end());

	vector<string> result;	// 듣보잡 명단

	for(int i=0; i<M; i++) {
		scanf("%s", str);
		string name = str;

		if (binary_search(ear.begin(), ear.end(), name))
			result.push_back(name);
	}
	sort(result.begin(), result.end());

	printf("%d\n", result.size());
	for (int i = 0; i < result.size(); i++)
		printf("%s\n", result[i].c_str());
}
