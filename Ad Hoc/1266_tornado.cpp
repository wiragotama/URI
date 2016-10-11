#include <iostream>
#include <cstdio>
using namespace std;

int arr[5001];

int DFS(int N, int at, int length) {
	if (arr[at]==0) {
		arr[at] = 2;
		length++;

		int next;
		int prev;

		if (at==N-1) next = 0;
		else next = at +1;

		if (at==0) prev = N-1;
		else prev = at -1;

		if (next==prev) {
			return length + DFS(N, next, 0);
		}
		else {
			return length + DFS(N, next, 0) + DFS(N, prev, 0);
		}
	}
	else return 0;
}

int main() {
	int N;
	while (scanf("%d",&N)==1) {
		if (N!=0) {
			int result = 0;
			int a;
			bool first = true;

			for (int i=0; i<N; i++) {
				scanf("%d",&a);
				arr[i] = a;
			}

			int longest = 0;
			for (int i=0; i<N; i++) {
				if (arr[i]==1) {
					first = false;
				}
				else if (arr[i]==0) {
					longest = DFS(N, i, 0);
					result += (longest/2);
				}
			}
			if (first) result += (longest%2);
			cout << result << endl;
		}
	}
	return 0;
}