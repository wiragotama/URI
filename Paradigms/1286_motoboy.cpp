//URI 1286 motoboy
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			int p;
			scanf("%d",&p);

			int w[n+1];
			int v[n+1];
			int DP[n+1][p+1];

			for (int i=0; i<n; i++) {
				scanf("%d %d",&v[i],&w[i]);
				memset(&DP[i], 0, sizeof(DP[i]));
			}

			for (int i=0; i<n; i++) {
				for (int j=1; j<=p; j++) {
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

			printf("%d min.\n",DP[n-1][p]);
		}
	}
	return 0;
}