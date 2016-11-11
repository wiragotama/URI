//URI 1256 Hash Tables
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int N, M, C;
	scanf("%d",&N);
	for (int i=0; i<N; i++) {
		if (i>0) cout << endl;
		scanf("%d %d",&M,&C);
		vector< vector<int> > hash_table(M);
		int number;
		for (int j=0; j<C; j++) {
			scanf("%d",&number);
			int res = number % M;
			hash_table[res].push_back(number);
		}

		for (int j=0; j<M; j++) {
			cout << j << " -> ";
			for (int k=0; k<hash_table[j].size(); k++) {
				cout << hash_table[j][k] << " -> ";
			}
			cout << "\\" << endl;
		}
	}
	return 0;
}