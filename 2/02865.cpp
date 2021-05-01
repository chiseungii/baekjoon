#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int N; cin >> N;	// 예선 참가자 수
	int M; cin >> M;	// 장르 수
	int K; cin >> K;	// 본선 진출자 수

	double participants[101] = { 0, };

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			int I; cin >> I;	// 참가자 번호
			double s; cin >> s;	// 능력치

			if (participants[I] < s)
				participants[I] = s;
		}
	}

	sort(participants + 1, participants + N + 1, greater<double>());

	//deque<pair<int, double>> scores[100];	// 능력치

	//for (int i = 0; i < M; i++) {
	//	for (int j = 0; j < N; j++) {
	//		int I; cin >> I;	// 참가자 번호
	//		double s; cin >> s;	// 능력치

	//		scores[i].push_back(make_pair(I, s));
	//	}
	//}

	//double max_score[101];

	//// 초기화
	//for (int i = 1; i <= N; i++)
	//	max_score[i] = -1.0;

	//for (int i = 0; i < N; i++) {
	//	// front 다 훑으면서 일순위 능력치 구함
	//	pair<int, double> max_person = scores[1].front();

	//	for (int j = 1; j < M; j++) {
	//		if (scores[j].front().second > max_person.second)
	//			max_person = scores[j].front();
	//	}

	//	// 최고 능력치 저장
	//	max_score[max_person.first] = max_person.second;

	//	// 저장된 사람 다 지우기
	//	for (int j = 0; j < M; j++) {
	//		while (!scores[j].empty() && max_score[scores[j].front().first] != -1.0)
	//			scores[j].pop_front();
	//	}
	//}

	//// 배열 정렬
	//sort(max_score + 1, max_score + N + 1, greater<double>());

	// 본선 진출자 수 만큼만 더함
	double result = 0.0;

	for (int i = 1; i <= K; i++)
		result += participants[i];

	printf("%.1lf\n", result);
}
