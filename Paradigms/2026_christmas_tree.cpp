//URI 2026 christmas tree
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	int G;
	scanf("%d",&G);
	for (int x=0; x<G; x++) {
		int P, max_weight;
		scanf("%d %d",&P, &max_weight);
		
		int w[P+1];
		int v[P+1];
		int DP[P+1][max_weight+1];

		for (int i=0; i<P; i++) {
			scanf("%d %d",&v[i], &w[i]);
			memset(DP[i], 0, sizeof(DP[i]));
		}

		for (int i=0; i<P; i++) {
			for (int j=0; j<=max_weight; j++) {
				if (i==0) {
					DP[i][j] = 0;
					if(w[i] <= j) DP[i][j] = max(DP[i][j], v[i]);
				}
				else {
					if (w[i] <= j) {
						DP[i][j] = max(DP[i-1][j], DP[i-1][j-w[i]]+v[i]);
					}
					else DP[i][j] = DP[i-1][j];
				}
			}
		}
		cout << "Galho " << x+1 <<":" << endl;
		cout << "Numero total de enfeites: " << DP[P-1][max_weight] << endl << endl;
	}
	return 0;
}