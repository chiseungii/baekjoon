#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int Q; cin >> Q;

	for (int i = 0; i < Q; i++) {
		long long a; scanf("%ld", &a);

		if ((a & (-a)) == a)
			printf("1\n");
		else
			printf("0\n");
	}
}
