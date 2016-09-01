//URI 1288 destructive cannon
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for (int x=0; x<t; x++) {
		int n;
		scanf("%d",&n);
		int w[n+1];
		int v[n+1];

		for (int i=0; i<n; i++) {
			scanf("%d %d",&v[i], &w[i]);
		}

		int k, r;
		scanf("%d %d",&k, &r);

		int DP[n+1][k+1];
		for (int i=0; i<n; i++)
			memset(&DP[i], 0, sizeof(DP[i]));

		for (int i=0; i<n; i++) {
			for (int j=1; j<=k; j++) {
				if (i==0) {
					DP[i][j] = 0;
					if (w[i] <= j) DP[i][j] = max(DP[i][j], v[i]);
				}
				else {
					if (w[i] <= j) {
						DP[i][j] = max(DP[i-1][j], DP[i-1][j-w[i]]+v[i]);
					}
					else DP[i][j] = DP[i-1][j];
				}
			}
		}

		//printf("%d\n", DP[n-1][k]);
		if (DP[n-1][k] >= r) {
			printf("Missao completada com sucesso\n");
		}
		else printf("Falha na missao\n");
	}
	return 0;
}