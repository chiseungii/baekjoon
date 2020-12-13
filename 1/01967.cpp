#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<pair<int, int>> graph[10001];	// node 번호, weight
char check[10001];						// 방문 체크

int len = 0, max_len = 0;
int max_node = 0;

int N;

void find_far_node(int root_node) {
	stack<int> nodes;
	nodes.push(root_node);
	check[root_node] = 1;

	while (!nodes.empty()) {
		int tmp = nodes.top();

		bool no_way = true;
		for (int i = 0; i < graph[tmp].size(); i++) {
			int node = graph[tmp][i].first;
			int weight = graph[tmp][i].second;

			if (!check[node]) {
				no_way = false;
				nodes.push(node);
				check[node] = 1;

				len += weight;
				if (len > max_len) {
					max_len = len;
					max_node = node;
				}
				break;
			}
		}

		if (no_way) {
			nodes.pop();

			if (!nodes.empty()) {
				int node = nodes.top();
				for (int i = 0; i < graph[node].size(); i++)
					if (graph[node][i].first == tmp)
						len -= graph[node][i].second;
			}
		}
	}
}

int main() {
	// input
	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		int n1, n2, w;
		cin >> n1 >> n2 >> w;

		graph[n1].push_back(make_pair(n2, w));
		graph[n2].push_back(make_pair(n1, w));
	}

	// 루트에서 제일 먼 노드 번호 찾기
	find_far_node(1);

	// 초기화
	for (int i = 1; i <= N; i++) check[i] = 0;
	len = max_len = 0;

	// 지름 찾기
	find_far_node(max_node);

	cout << max_len << endl;
}
