//URI 1767 santa claus bag
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
		int total_toys = 0;

		for (int i=0; i<n; i++) {
			scanf("%d %d",&v[i], &w[i]);
		}

		int k=50;

		int DP[n+1][k+1];
		int DP_weight[n+1][k+1];
		int DP_package[n+1][k+1];

		for (int i=0; i<n; i++) {
			memset(&DP[i], 0, sizeof(DP[i]));
			memset(&DP_weight[i], 0, sizeof(DP_weight[i]));
			memset(&DP_package[i], 0, sizeof(DP_package[i]));
		}

		for (int i=0; i<n; i++) {
			for (int j=1; j<=k; j++) {
				if (i==0) {
					DP[i][j] = 0;
					DP_weight[i][j] = 0;
					DP_package[i][j] = 0;
					if (w[i] <= j) {
						if (v[i] >= DP[i][j]) {
							DP_weight[i][j] = w[i];
							DP_package[i][j] = 1;
						}
						else {
							DP_weight[i][j] = 0;
							DP_package[i][j] = 0;
						}
						DP[i][j] = max(DP[i][j], v[i]);
					}
				}
				else {
					if (w[i] <= j) {
						if (DP[i-1][j] > DP[i-1][j-w[i]]+v[i]) {
							DP_weight[i][j] = DP_weight[i-1][j];
							DP_package[i][j] = DP_package[i-1][j];
						}
						else {
							DP_weight[i][j] = DP_weight[i-1][j-w[i]]+w[i];
							DP_package[i][j] = DP_package[i-1][j-w[i]]+1;
						}
						DP[i][j] = max(DP[i-1][j], DP[i-1][j-w[i]]+v[i]);
					}
					else {
						DP[i][j] = DP[i-1][j];
						DP_weight[i][j] = DP_weight[i-1][j];
						DP_package[i][j] = DP_package[i-1][j];
					}
				}
			}
		}

		printf("%d brinquedos\n",DP[n-1][k]);
		printf("Peso: %d kg\n",DP_weight[n-1][k]);
		printf("sobra(m) %d pacote(s)\n\n",n - DP_package[n-1][k]);
	}
	return 0;
}